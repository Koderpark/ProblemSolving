#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
typedef long long ll;

vector<ll> seg;
int N,a,b,c;
int flag = 0;

void update(int node, int s, int e, int idx, ll diff){
	if(idx<s || e<idx) return;
	seg[node] += diff;
	if(s != e){
		int mid = (s+e)/2;
		update(2*node, s, mid, idx, diff);
		update(2*node+1, mid+1, e, idx, diff);
	}
	return;
}

int query(int node, int s, int e, int K){
	if(s == e) return s;
	
	int mid = (s+e)/2;
	if(seg[node*2] >= K) return query(node*2, s, mid, K);
	else return query(node*2+1, mid+1, e, K-seg[node*2]);
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
    cout.tie(NULL);
	seg.resize(1 << ((int)ceil(log2(MAX)) + 1));
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a;
		if(a==1){
			cin >> b;
			int idx = query(1, 1, MAX, b);
			cout << idx << "\n";
			flag = 0;
			update(1,1,MAX, idx, -1);
		}
		if(a==2){
			cin >> b >> c;
			update(1,1,MAX,b,c);
		}
	}
	return 0;
}
