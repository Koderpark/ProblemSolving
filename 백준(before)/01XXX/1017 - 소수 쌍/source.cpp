#include <bits/stdc++.h>
using namespace std;

bool sieve[2345];

vector<int> even;
vector<int> odd;

vector<int> g[50];

int main(){
	memset(sieve, 0, sizeof(sieve));
	sieve[0] = sieve[1] = true;
	
	for(int i=2; i<2345; i++){
		if(!sieve[i]){
			for(int j=i+i; j<2345; j+=i){
				sieve[j] = true;
			}
		}
	}
	
	int N,a;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a;
		if(a%2) odd.push_back(a);
		else	even.push_back(a);
	}
	
	if(odd.size() != even.size()){
		cout << -1;
		return 0;
	}
	
	for(int i=0; i<odd.size(); i++){
		for(int j=0; j<even.size(); j++){
			if(!sieve[odd[i] + even[j]]){
				g[i].push_back(j);
			}
		}
	}
	
	
	return 0;
}
