#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll arr[123456] = {0};
ll seg[456789] = {0}; // 짝수 개수를 세는 세그트리 

int n,m;

ll init(int node=1, int start=1, int end=n){
	if(start==end) return seg[node] = arr[start];
	
	int mid = (start + end) / 2;
	return seg[node] = init(node*2,   start, mid) +
	                   init(node*2+1, mid+1, end);
}

void update(int idx, int diff, int node=1, int start=1, int end=n){
	if(!(start <= idx && idx <= end)) return;
	
	seg[node]+=diff;
	
	int mid = (start+end)/2;
	if(start != end){
		update(idx, diff, node*2,   start, mid);
		update(idx, diff, node*2+1, mid+1, end);
	}
	return;
}

ll sum(int l, int r, int node=1, int start=1, int end=n){
	if(l <= start && end <= r) return seg[node];
	if(r <  start || end <  l) return 0;
	
	int mid = (start+end)/2;
	return sum(l,r, node*2,   start, mid) +
	       sum(l,r, node*2+1, mid+1, end);
}

int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++){ scanf("%d", &arr[i]); arr[i] %= 2;}
	scanf("%d", &m);
	init();
	
	//for(int i=1; i<=n; i++) printf("%d", arr[i]); puts("");
	
	while(m--){
		int a,b,c;
		scanf("%d %d %d", &a, &b, &c);
		
		if(a==1){ update(b,(c%2)-arr[b]); arr[b] = (c%2); }
		if(a==2){ printf("%lld\n", c-b+1 - sum(b,c)); }
		if(a==3){ printf("%lld\n", sum(b,c)); }
	}
	return 0;
}
