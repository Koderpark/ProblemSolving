#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int N,M;
int arr[1234567] = {0};

ll add(ll height){
	ll ans = 0;
	for(int i=0; i<N; i++){ ans += height/arr[i]; }
	return ans;
}

ll search(ll s, ll e){
	ll mid = (s+e)/2;
	
	if(s==e) return s;
	
	ll val = add(mid);
	if(val >= M) return search(s,mid);
	else		 return search(mid+1,e);
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> N >> M;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	cout << search(1, 1e12);
}
