#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> ans;
int cnt;

void f(int n, int s, int e){
	if(!n) return;
	
	cnt++;
	
	f(n-1, s, 6-s-e);
	ans.push_back({s,e});
	f(n-1, 6-s-e, e);
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	f(n,1,3);
	
	printf("%d\n", cnt);
	for(int i=0; i<ans.size(); i++) printf("%d %d\n", ans[i].first, ans[i].second);
	return 0;
}
