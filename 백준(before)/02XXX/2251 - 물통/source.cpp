#include <bits/stdc++.h>
using namespace std;

bool vis[234][234][234] = {0};
set<int> ans;
int A,B,C;

void dfs(int a, int b, int c){
	if(vis[a][b][c]) return;
	vis[a][b][c] = true;
	
	if(a == 0) ans.insert(c);
	
	// a->b
	if(a+b<=B) dfs(0,a+b,c);
	else dfs(a+b-B, B, c);
	
	// a->c
	if(a+c<=C) dfs(0,b,a+c);
	else dfs(a+c-C,b,C);
	
	// b->a
	if(b+a<=A) dfs(b+a,0,c);
	else dfs(A,b+a-A,c);
	
	// b->c
	if(b+c<=C) dfs(a,0,b+c);
	else dfs(a,b+c-C,C);
	
	// c->a
	if(c+a<=A) dfs(c+a,b,0);
	else dfs(A,b,c+a-A);
	
	// c->b
	if(c+b<=B) dfs(a,c+b,0);
	else dfs(a,B,c+b-B);
	
	return;
}

int main(){
	cin >> A >> B >> C;
	
	dfs(0,0,C);
	
	for(auto k : ans){
		cout << k << " ";
	}
	return 0;
}
