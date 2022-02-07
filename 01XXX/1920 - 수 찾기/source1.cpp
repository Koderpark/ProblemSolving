#include <bits/stdc++.h>
using namespace std;

map<int,bool> m;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL); 
	
	int N,k;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
		m[k] = true;
	}
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> k;
			
		cout << (m[k] ? '1' : '0') << "\n";
	}
	
	return 0;
}
