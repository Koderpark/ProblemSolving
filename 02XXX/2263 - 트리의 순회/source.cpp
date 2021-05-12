#include <bits/stdc++.h>
using namespace std;

int in[123456] = {0};
int post[123456] = {0};
int idx[123456] = {0};

void func(int as, int ae, int bs, int be){
	if(as > ae || bs > be) return;
	
	int node = post[be];
	printf("%d ", node);
	
	func(as, idx[node]-1, bs, bs+idx[node]-as-1);
	func(idx[node]+1, ae, bs+idx[node]-as, be-1);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &in[i]);
	for(int i=1; i<=n; i++) scanf("%d", &post[i]);
	for(int i=1; i<=n; i++) idx[in[i]] = i;
	
	func(1,n,1,n);
	return 0;
}
