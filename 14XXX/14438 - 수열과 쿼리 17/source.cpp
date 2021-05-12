#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;
typedef long long int ll;

ll arr[123456] = {0};
ll seg[456789] = {0};
ll n,m;
ll a,b,c;

ll init(int node=1, int start=1, int end=n){
	if(start==end) return seg[node] = arr[start];
	
	int mid = (start + end) / 2;
	return seg[node] = min(
		init(node*2,   start, mid),
		init(node*2+1, mid+1, end)
	);
}

ll update(int idx, ll diff, int node=1, int start=1, int end=n){
	if(!(start <= idx && idx <= end)) return seg[node];
	if(start == end) return seg[node] = diff;
	
	int mid = (start + end) / 2;
	return seg[node] = min(
		update(idx,diff,node*2,   start, mid),
		update(idx,diff,node*2+1, mid+1, end)
	);
}

ll query(int l, int r, int node=1, int start=1, int end=n){
	if(l <= start && end <= r) return seg[node];
	if(r <  start || end <  l) return INF;
	
	int mid = (start + end) / 2;
	return min(
		query(l,r,node*2,   start, mid),
		query(l,r,node*2+1, mid+1, end)
	);
}

int main(){
	scanf("%lld", &n);
	for(int i=1; i<=n; i++) scanf("%lld", &arr[i]);
	init();
	
	scanf("%lld", &m);
	while(m--){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a==1){ update(b,c); }
		if(a==2){ printf("%lld\n", query(b,c)); }
	}
	return 0;
}
