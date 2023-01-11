#include <bits/stdc++.h>
using namespace std;

int sleve[12345] = {0};
vector<int> prime;

int main(){
	
	sleve[1] = 1;
	sleve[0] = 1;
	for(int i=2; i<=1000; i++){
		for(int j=i+i; j<=1000; j+=i){
			sleve[j] = 1;
		}
	}
	
	for(int i=1; i<=1000; i++){
		if(sleve[i]==0) prime.push_back(i);
	}
		
	int T;
	cin >> T;
	while(T--){
		int k;
		cin >> k;
		
		for(int i=0; i<prime.size(); i++){
			for(int j=0; j<prime.size(); j++){
				if(k-(prime[i]+prime[j]) > 0 && sleve[k-(prime[i]+prime[j])] == 0){
					cout << prime[i] << " " << prime[j] << " " << k-(prime[i]+prime[j]) << '\n';
					goto end;	
				}
			}
		}
		end:;
	}
	return 0;
}
