#include <bits/stdc++.h>
using namespace std;

int fail[1234567] = {0};
char s1[2345678] = {0};
char s2[1234567] = {0};

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b,a%b);
}

int main(){
	int N;
	cin >> N;
	
	for(int i=0; i<N; i++){ cin >> s1[i]; s1[N+i] = s1[i]; }
	for(int i=0; i<N; i++){ cin >> s2[i]; }
	
	for(int i=0,j=1; j<N; j++){
		while(i>0 && s2[i] != s2[j]) i = fail[i-1];
		if(s2[i] == s2[j]) fail[j] = ++i;
	}
	
	int cnt = 0;
	for(int i=0,j=0; j<N*2-1; j++){
		while(i>0 && s1[j] != s2[i]) i = fail[i-1];
		if(s1[j] == s2[i]){
			if(i == N-1){
				cnt++;
				i = fail[i];
			}
			else i++;
		}
	}
	//printf("[%d]", cnt);
	int d = gcd(cnt,N);
	cout << cnt/d <<"/"<<N/d<<"\n";
}
