#include <bits/stdc++.h>
using namespace std;

vector<int> prime;
bool sleve[2000000] = {0};

int main(){
	prime.push_back(0);
	sleve[0] = sleve[1] = true;
	for(int i=2; i<2000000; i++){
		if(!sleve[i]){
			prime.push_back(i);
			for(int j=i+i; j<2000000; j+=i){
				sleve[j] = true;
			}
		}
	}
	
	int t;
	cin >> t;
	while(t--){
		int N;
		cin >> N;
		
		if(!sleve[N] || N == 1){
			cout << "0\n";
			continue;
		}
		
		auto rit = upper_bound(prime.begin(), prime.end(), N);
		auto lit = lower_bound(prime.begin(), prime.end(), N);
		
		cout << *rit-*(--lit) << "\n";
	}
	return 0;
}
