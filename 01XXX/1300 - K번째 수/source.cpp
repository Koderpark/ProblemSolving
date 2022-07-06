#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N,K;
int search(ll s, ll e){
	ll mid = (s+e)/2;
	ll cnt = 0;
	
	if(s>e) return s;
	for(int i=1; i<=N; i++) cnt += min(N,mid/i);
	
	if(cnt < K) return search(mid+1,e);
	else        return search(s,mid-1);
}

int main(){
	cin >> N >> K;
	cout << search(1,N*N);
	return 0;
}
