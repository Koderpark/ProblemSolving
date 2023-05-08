#include <bits/stdc++.h>
#define INF 123456789123456789LL
using namespace std;
typedef long long int ll;

int n,m;
int a,b;

ll arr[123456] = {0};
ll seg[456789] = {0};

ll init(int node, int start, int end){
	if(start == end) return seg[node] = arr[start];
	
	int mid = (start + end) / 2;
	return seg[node] = min(init(node*2, start, mid),init(node*2+1, mid+1, end));
}

ll query(int node, int start, int end, int left, int right){
	if(left > end || right < start) return INF;
	if(left <= start && end <= right) return seg[node];
	
	int mid = (start + end) / 2;
	return min(
		query(node*2  ,start,mid,left,right),
		query(node*2+1,mid+1,end,left,right)
	);
}

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) scanf("%lld", &arr[i]);
	init(1,1,n);
	
	for(int i=1; i<=m; i++){
		scanf("%d %d", &a, &b);
		printf("%lld\n", query(1,1,n,a,b));
	}
}
