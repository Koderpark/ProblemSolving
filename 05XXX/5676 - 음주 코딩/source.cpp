#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long int ll;

ll arr[1234567] = {0};
ll seg[4567890] = {0};

int n,m;
int b,c;
char a;

ll init(int node=1, int start=1, int end=n){
	if(start == end) return seg[node] = arr[start];
	
	int mid = (start+end)/2;
	return seg[node] = (init(node*2,start,mid) * init(node*2+1,mid+1,end));
}

ll update(int idx, ll diff, int node=1, int start=1, int end=n){
	if(!(start <= idx && idx <= end)) return seg[node];
	
	if(start == end) return seg[node] = diff;
	
	int mid = (start + end) / 2;
	return seg[node] = (
		update(idx,diff, node*2,   start, mid)*
		update(idx,diff, node*2+1, mid+1, end)
	);
}

ll query(int l, int r, int node=1, int start=1, int end=n){
	if(r < start || end < l) return 1;
	if(l <= start && end <= r) return seg[node];
	
	int mid = (start + end) / 2;
	return (query(l,r,node*2,start,mid) * query(l,r,node*2+1,mid+1,end));
}

int main(){
	while(scanf("%d", &n) != EOF){
		scanf("%d", &m);
		for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
		init();
		
		for(int i=0; i<m; i++){
			cin >> a >> b >> c;
			if(a=='C'){ update(b,c); }
			if(a=='P'){ 
				ll v = query(b,c);
				if(v==0) printf("0");
				if(v> 0) printf("+");
				if(v< 0) printf("-");
			}
		}
		puts("");
	}
	return 0;
}
