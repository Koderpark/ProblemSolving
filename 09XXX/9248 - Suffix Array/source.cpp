#include <bits/stdc++.h>
using namespace std;

int n,t;
int suffix[567890];
int lcp[567890];
int tmp[567890];
int g[567890], tg[567890];
string s;

bool compare(int a, int b){
	if(g[a] == g[b]) return g[a+t]<g[b+t];
	return g[a]<g[b];
}

void SuffixArray(string str){
	t = 1;
	n = str.length();
	for(int i=0; i<n; i++){ suffix[i] = i; g[i] = str[i]-'a'; }
	
	while(t<=n){
		g[n] = -1;
		sort(suffix, suffix+n, compare);
		tg[suffix[0]] = 0;
		
		for(int i=1; i<n; i++){
			if(compare(suffix[i-1], suffix[i])) tg[suffix[i]] = tg[suffix[i-1]] + 1;
			else tg[suffix[i]] = tg[suffix[i-1]];
		}
		
		for(int i=0; i<n; i++) g[i] = tg[i];
		t*=2;
	}
}
 
void LCP(){
	for(int i=0; i<n; i++) tmp[suffix[i]] = i;
	int len = 0;
	for(int i=0; i<n; i++){
		if(tmp[i]){
			int j = suffix[tmp[i]-1];
			while(s[j+len] == s[i+len]) len++;
			lcp[tmp[i]] = len;
			
			if(len) len--;
		}
	}
}

int main(){
	cin >> s;
	n = s.length();
	SuffixArray(s);
	LCP();
	for(int i=0; i<n; i++) cout << suffix[i]+1 << " ";
	cout << "\nx ";
	for(int i=1; i<n; i++) cout << lcp[i] << " ";
	return 0;
}
