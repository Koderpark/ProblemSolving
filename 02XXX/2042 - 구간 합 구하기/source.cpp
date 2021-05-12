#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll arr[1234567] = {0};
ll seg[4567890] = {0};

int n,m,k;
ll a,b,c;

ll init(int node, int start, int end){
	if(start == end) return seg[node] = arr[start];
	
	int mid = (start + end) / 2;
	return seg[node] = init(node*2, start, mid) + init(node*2+1, mid+1, end);
}

void update(int node, int start, int end, int index, ll diff){
	if(!(start <= index && index <= end)) return;
	
	seg[node] += diff;
	
	int mid = (start + end) / 2;
	if(start != end){
		update(node*2,   start, mid, index, diff);
		update(node*2+1, mid+1, end, index, diff);
	}
}

ll sum(int node, int start, int end, int left, int right){
	if(left > end || right < start) return 0;
	if(left <= start && end <= right) return seg[node];
	
	int mid = (start + end) / 2;
	return sum(node*2,   start, mid, left, right)
	     + sum(node*2+1, mid+1, end, left, right);
}

int main(){
	scanf("%d %d %d", &n, &m, &k);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	init(1,1,n);
	
	for(int i=1; i<=m+k; i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a==1){
			ll tmp = c - arr[b];
			arr[b] += tmp;
			update(1,1,n,b,tmp);
		}
		if(a==2){
			printf("%lld\n", sum(1,1,n,b,c));
		}
	}
	return 0;
}
