#include <bits/stdc++.h>
#define INF 123456789123456789LL
using namespace std;
typedef long long int ll;

ll arr[123456] = {0};
ll segmin[456789] = {0};
ll segmax[456789] = {0};

ll initmin(int node, int start, int end){
	if(start == end) return segmin[node] = arr[start];
	
	int mid = (start + end) / 2;
	return segmin[node] = min(initmin(node*2,start,mid), initmin(node*2+1,mid+1,end));
}

ll initmax(int node, int start, int end){
	if(start == end) return segmax[node] = arr[start];
	
	int mid = (start + end) / 2;
	return segmax[node] = max(initmax(node*2,start,mid), initmax(node*2+1,mid+1,end));
}

ll querymin(int node, int start, int end, int left, int right){
	if(right < start || left > end) return INF;
	if(left <= start && end <= right) return segmin[node];
	
	int mid = (start + end) / 2;
	return min(
		querymin(node*2,   start, mid, left, right),
		querymin(node*2+1, mid+1, end, left, right)
	);
}

ll querymax(int node, int start, int end, int left, int right){
	if(right < start || left > end) return -1;
	if(left <= start && end <= right) return segmax[node];
	
	int mid = (start + end) / 2;
	return max(
		querymax(node*2,   start, mid, left, right),
		querymax(node*2+1, mid+1, end, left, right)
	);
}

int main(){
	int n,m;
	int a,b;
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	initmin(1,1,n);
	initmax(1,1,n);
	
	for(int i=0; i<m; i++){
		scanf("%d %d", &a, &b);
		printf("%lld %lld\n", querymin(1,1,n,a,b), querymax(1,1,n,a,b));
	}
}
