#include <bits/stdc++.h>
using namespace std;

bool palin(string s){
	int N = s.length();
	for(int i=0; i<N; i++){
		int j=N-i-1;
		if(s[i] != s[j]) return false;
	}
	return true;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int N;
		string s[123];
		
		cin >> N;
		for(int i=0; i<N; i++){
			cin >> s[i];
		}
		
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(i==j) continue;
				if(palin(s[i]+s[j])){
					cout << s[i] << s[j] << "\n";
					goto exit;
				}
			}
		}
		
		cout << "0\n";
		exit:;
	}
}
