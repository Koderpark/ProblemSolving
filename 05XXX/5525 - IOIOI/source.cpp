#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int combo = 0;
string in;

int main(){
	int n,m;
	cin >> n >> m;
	cin >> in;
	
	for(int i=1; i<m; i++){
		if(in[i-1]=='I'){
			while(in[i]=='O' && in[i+1]=='I'){
				i+=2;
				if(combo == n-1){ ans++; }
				else combo++;
			}
		}
		combo = 0;
	}
	printf("%d", ans);
	return 0;
}
