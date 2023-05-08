#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll n,m;
ll arr[123456] = {0};

ll search(ll s, ll e){
	ll mid = (s+e)/2;
	if(s>e) return s;
	
	ll cnt = 0;
	ll tmp = 0;
	for(int i=0; i<n; i++){
		tmp += arr[i];
		if(mid < tmp){
			tmp = 0;
			i--;
			cnt++;
		}
	}
	
	if(cnt < m) return search(s,mid-1);
	else        return search(mid+1,e);
}

int main(){
	cin >> n >> m;
	
	ll maxv = -1;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		maxv = max(maxv, arr[i]);
	}
	cout << search(maxv, 1e9);
	return 0;
}
