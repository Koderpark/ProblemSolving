#include <bits/stdc++.h>
#define INF 123456789123456789LL
using namespace std;
typedef long long int ll;

ll arr[123456] = {0};
ll seg[456789] = {0};
int n;

int init(int node=1, int start=1, int end=n){
	if(start == end) return seg[node] = start;
	
	int mid = (start + end) / 2;
	int a = init(node*2,   start, mid);
	int b = init(node*2+1, mid+1, end);
	return seg[node] = arr[a]<=arr[b] ? a:b;
}

int query(int l, int r, int node=1, int start=1, int end=n){
	if(r < start || l > end) return 0;
	if(l <= start && end <= r) return seg[node];
	
	int mid = (start + end) / 2;
	int a = query(l, r, node*2,   start, mid);
	int b = query(l, r, node*2+1, mid+1, end);
	return arr[a] <= arr[b] ? a:b;
}

ll search(int s, int e){
	if(s==e) return arr[s];
	
	int idx = query(s,e);
	ll ret = (ll)arr[idx] * (e-s+1);
	
	if(idx > s){ ret = max(ret, search(s,idx-1)); }
	if(idx < e){ ret = max(ret, search(idx+1,e)); }
	return ret;
}

int main(){
	while(1){
		memset(arr, 0, sizeof(arr));
		memset(seg, 0, sizeof(seg));
		arr[0] = INF;
		scanf("%d", &n);
		if(n==0) break;
		
		for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
		init();
		
		printf("%lld\n", search(1,n));
	}
	return 0;
}
