#include <bits/stdc++.h>
#define INF 998244353
using namespace std;
typedef long long int ll;

int N;
ll seg[456789] = {0};
ll input[123456] = {0};
ll prefix[123456] = {0}; // prefix-sum

ll min(ll a, ll b){
	return a>b?b:a;
}

ll init(int node=1, int s=1, int e=N){
	if(s==e) return seg[node] = input[s];
	
	int mid = (s + e) / 2;
	return seg[node] = min(
		init(node*2,   s, mid),
		init(node*2+1, mid+1, e)
	);
}

ll query(int l, int r, int node=1, int start=1, int end=N){
	if(l<=start && end<=r) return seg[node];
	if(r< start || end< l) return INF;
	
	int mid = (start+end)/2;
	return min(
		query(l,r,node*2,start,mid),
		query(l,r,node*2+1,mid+1,end)
	);
}

ll get(int s, int e){
	ll sum = prefix[e] - prefix[s-1];
	ll multi = query(s,e);
	return sum*multi;
}

ll search(int s, int e){
	//cout << "{" << s << " " << e << "}";
	if(s==e) return input[s] * input[s];
	
	int mid = (s+e)/2;
	ll tmp = max(search(s,mid), search(mid+1,e));
	
	ll l = mid;
	ll r = mid+1;
	ll val = get(l,r);
	
	while(s<l || r<e){
		if(r<e && (l==s || input[l-1] < input[r+1])){
			r++;
			val = max(val, get(l,r));
		}else{
			l--;
			val = max(val, get(l,r));
		}
	}
	return max(tmp, val);
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> input[i];
		prefix[i] = prefix[i-1] + input[i];
	}
	init();
	
	cout << search(1,N);
	return 0;
}
