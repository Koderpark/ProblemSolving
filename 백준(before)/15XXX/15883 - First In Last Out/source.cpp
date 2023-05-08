#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
using namespace std;

string s = "0123456789abcdef";
string it = "LISTFOKCA";
int m[256];

bool vis[16];
bool isNumDuple(){
	memset(vis, 0, sizeof(vis));
	
	for(int i=0; i<9; i++){
		if(m[it[i]] == -1) continue;
		if(vis[m[it[i]]] != 0) return true;
		vis[m[it[i]]] = true;
	}
	return false;
}

int main(){
	int k,sum; // 100000 - ffffff
	for(int i=1048576; i<=16777215; i++){
		memset(m,-1,sizeof(m));
		
		k = i;
		m['O'] = k%16; k/=16;
		m['F'] = k%16; k/=16;
		m['T'] = k%16; k/=16;
		m['S'] = k%16; k/=16;
		m['I'] = k%16; k/=16;
		m['L'] = k%16; k/=16;
		
		
		
		if(!m['L'] || !m['F'] || !m['S'] || isNumDuple()) continue;
		
		sum  = m['L']*4096 + m['I']*256 + m['S']*16 + m['T'];
		sum += m['F']*4096 + m['I']*256 + m['L']*16 + m['O'];
		
		k = sum;
		
		m['K'] = k%16; k/=16;
		m['C'] = k%16; k/=16;
		m['A'] = k%16; k/=16;
		if(m['T'] != k%16) continue; k/=16;
		if(m['S'] != k%16) continue; k/=16;
		
		if(isNumDuple()) continue;
		
		printf("%c%c%c%c + ",  s[m['L']], s[m['I']], s[m['S']], s[m['T']]);
		printf("%c%c%c%c = ",  s[m['F']], s[m['I']], s[m['L']], s[m['O']]);
		printf("%c%c%c%c%c\n", s[m['S']], s[m['T']], s[m['A']], s[m['C']], s[m['K']]); 
	}
	return 0;
}
