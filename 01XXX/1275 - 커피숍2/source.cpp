#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll arr[123456] = {0};
ll seg[456789] = {0};
int n,q;

ll init(int node=1, int start=1, int end=n){
	if(start == end) return seg[node] = arr[start];
	
	int mid = (start + end) / 2;
	return seg[node] = init(node*2,start,mid) + init(node*2+1,mid+1,end);
}

void update(int idx, ll diff, int node=1, int start=1, int end=n){
	if(!(start <= idx && idx <= end)) return;
	
	seg[node] += diff;
	
	int mid = (start + end) / 2;
	if(start != end){
		update(idx, diff, node*2,   start, mid);
		update(idx, diff, node*2+1, mid+1, end);
	}
	return;
}

ll query(int l, int r, int node=1, int start=1, int end=n){
	if(r <  start || end <  l) return 0;
	if(l <= start && end <= r) return seg[node];
	
	int mid = (start + end) / 2;
	return query(l,r,node*2,   start, mid)
	     + query(l,r,node*2+1, mid+1, end);
}

int main(){
	scanf("%d %d", &n, &q);
	for(int i=1; i<=n; i++) scanf("%lld", &arr[i]);
	init();
	
	for(int i=0; i<q; i++){
		int a,b,c,d;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		if(a>b){ int tmp = a; a = b; b = tmp; }
		
		printf("%lld\n", query(a,b));
		ll tmp = d-arr[c];
		arr[c] += tmp;
		update(c,tmp);
	}
	return 0;
}
