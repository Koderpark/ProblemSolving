#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long int ll;

ll arr[1234567] = {0};
ll seg[4567890] = {0};

int n,m;
int b,c;
char a;

ll change(ll x){
	if(x==0) return 0;
	if(x> 0) return 1;
	if(x< 0) return -1;
}

ll init(int node=1, int start=1, int end=n){
	if(start == end) return seg[node] = arr[start];
	
	int mid = (start+end)/2;
	return seg[node] = change(init(node*2,start,mid) * init(node*2+1,mid+1,end));
}

ll update(int idx, ll diff, int node=1, int start=1, int end=n){
	if(!(start <= idx && idx <= end)) return seg[node];
	
	if(start == end) return seg[node] = diff;
	
	int mid = (start + end) / 2;
	return seg[node] = change(
		update(idx,diff, node*2,   start, mid)*
		update(idx,diff, node*2+1, mid+1, end)
	);
}

ll query(int l, int r, int node=1, int start=1, int end=n){
	if(r < start || end < l) return 1;
	if(l <= start && end <= r) return seg[node];
	
	int mid = (start + end) / 2;
	return change(query(l,r,node*2,start,mid) * query(l,r,node*2+1,mid+1,end));
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	while(cin >> n >> m){
		vector<char> ans;
		
		for(int i=1; i<=n; i++) cin >> arr[i];
		init();
		for(int i=0; i<m; i++){
			cin >> a >> b >> c;
			if(a=='C'){ update(b,c); }
			if(a=='P'){ 
				ll v = query(b,c);
				if(v==0) ans.push_back('0');
				if(v> 0) ans.push_back('+');
				if(v< 0) ans.push_back('-');
			}
		}
		for(auto k : ans) cout << k;
		cout << "\n";
	}
	return 0;
}
