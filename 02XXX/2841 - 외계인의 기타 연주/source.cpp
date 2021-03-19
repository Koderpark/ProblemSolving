#include <bits/stdc++.h>
#define last v[a].size()-1
using namespace std;

stack<int> s[10];

int main(){
	int n,p;
	int a,b;
	int ans = 0;
	
	scanf("%d %d", &n, &p);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		if(s[a].empty()){ s[a].push(b); ans++; }
		else{
			if(s[a].top() == b) continue;
			if(s[a].top() >  b){
				while(!s[a].empty() && s[a].top() > b){
					s[a].pop();
					ans++;
				}
			}
			if(!s[a].empty() && s[a].top() == b) continue;
			s[a].push(b);
			ans++;
		}
	}
	printf("%d", ans);
	return 0;
}
