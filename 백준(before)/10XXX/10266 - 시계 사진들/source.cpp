#include <bits/stdc++.h>
using namespace std;

int fail[360001] = {0};

char s1[720001] = {0};
char s2[360001] = {0};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N = 360000;
	int n,k;
	cin >> n;
	for(int i=0; i<n; i++){ cin >> k; s1[k] = 1; s1[k+360000] = 1;}
	for(int i=0; i<n; i++){ cin >> k; s2[k] = 1; }
	
	for(int i=0,j=1; j<N; j++){
		if(i>0 && s2[i] != s2[j]) i = fail[i-1];
		if(s2[i] == s2[j]) fail[j] = ++i;
	}
	
	for(int i=0,j=0; j<N*2; j++){
		while(i>0 && s2[i] != s1[j]) i = fail[i-1];
		if(s2[i] == s1[j]){
			if(i == N-1){
				cout << "possible";
				i = fail[i];
				return 0;
			}
			else i++;
		}
	}
	
	cout << "impossible";
	return 0;
}
