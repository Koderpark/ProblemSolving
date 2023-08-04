#include <bits/stdc++.h>
using namespace std;

map<int,bool> chk;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		int N,a;
		chk.clear();
		
		cin >> N;
		for(int i=0; i<N; i++){
			cin >> a;
			chk[a] = true;
		}
		
		cin >> N;
		for(int i=0; i<N; i++){
			cin >> a;
			cout << chk[a] << "\n";
		}
	}
}
