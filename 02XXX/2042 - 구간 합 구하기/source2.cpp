#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll arr[1234567] = {0};
ll seg[4567890] = {0};

ll N,M,K;

ll init(int node=1, int s=1, int e=N){
	if(s==e) return seg[node] = arr[s];
	
	int mid = (s+e)/2;
	return seg[node] = init(node*2, s, mid) + init(node*2+1, mid+1, e);
}

void update(int idx, ll diff, int node=1, int s=1, int e=N){
	if(!(s<=idx && idx<=e)) return;
	
	seg[node] += diff;
	
	int mid = (s+e)/2;
	if(s!=e){
		update(idx, diff, node*2, s, mid);
		update(idx, diff, node*2+1, mid+1, e);
	}
	return;
}

ll query(int l, int r, int node=1, int s=1, int e=N){
	if(l>e || r<s) return 0;
	if(l<=s && e<=r) return seg[node];
	
	int mid = (s+e)/2;
	return query(l,r,node*2, s,mid) + query(l,r,node*2+1,mid+1,e);
}


int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M >> K;
	
	for(int i=1; i<=N; i++) cin >> arr[i];
	
	init();
	
	for(int i=0; i<M+K; i++){
		ll a,b,c;
		cin >> a >> b >> c;
		if(a == 1){
			ll diff = c - arr[b];
			arr[b] = c;
			update(b,diff);
		}
		if(a == 2){
			cout << query(b,c) << "\n";
		}
	}
	return 0;
}
