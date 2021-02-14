#include <bits/stdc++.h>
#define INF 1e9+1
using namespace std;

int seg[456789] = {0};
int arr[123456] = {0};

int minF(int a, int b){
	if(a == INF) return b;
	if(b == INF) return a;
	if(arr[a] == arr[b]) return min(a,b);
	return arr[a]<arr[b] ? a:b;
}

int init(int node, int s, int e){
	if(s==e) return seg[node] = s;
	int m = (s+e)/2;
	return seg[node] = minF(init(node*2, s, m), init(node*2+1, m+1, e));
}

int query(int node, int s, int e, int l, int r){
	if(r< s || e< l) return INF;
	if(l<=s && e<=r) return seg[node];
	int m = (s+e)/2;
	return minF(query(node*2,s,m,l,r), query(node*2+1,m+1,e,l,r));
}

int update(int node, int s, int e, int idx){
	if(idx < s || e < idx || s == e) return seg[node];
	int m = (s+e)/2;
	return seg[node] = minF(update(node*2, s, m, idx), update(node*2+1, m+1, e, idx));
}

int main(){
	int n,m;
	int a,b,c;
	
	scanf("%d", &n);
	for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
	init(1,1,n);
	
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d %d %d", &a, &b, &c);
		if(a==1){
			arr[b] = c;
			update(1,1,n,b);
		}
		if(a==2){
			printf("%d\n", query(1,1,n,b,c));
		}
	}
	return 0;
}
