#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int main(){
	int N,K,a;
	
	cin >> N;
	while(N--){
		cin >> K;
		if(!K){
			int mx = -1;
			int mxptr = 0;
			for(int i=0; i<v.size(); i++){
				if(mx < v[i]){
					mx = v[i];
					mxptr = i;
				}
			}
			
			if(mx != -1){
				cout << mx << "\n";
				v[mxptr] = -1;
			}
			else{
				cout << -1 << "\n";
			}
		}
		else{
			for(int i=0; i<K; i++){
				cin >> a;
				v.push_back(a);
			}
		}
	}
	return 0;
}
