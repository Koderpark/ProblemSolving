#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
/*
 * 도토리 개수 구하기.
 * 간격 d로 두고, 구간[a,b] 에서 도토리 개수는
 * min(b,now)/d - a/d;
 * 도토리 개수는 단조증가 - 파라메트릭
 */
 
ll N,K,D;
ll a[1234567] = {0};
ll b[1234567] = {0};
ll c[1234567] = {0};

ll cnt(ll k){
	ll cnt = 0;
	for(int i=0; i<K; i++){
		if(k < a[i]) continue;
		cnt += (min(k,b[i])-a[i])/c[i]+1;
	}
	return cnt;
}

ll search(ll s, ll e){
	ll mid = (s+e)/2;
	
	if(s>e) return s;
	
	
	if(cnt(mid) < D) return search(mid+1,e);
	else             return search(s,mid-1);
}

int main(){
	cin >> N >> K >> D;
	for(int i=0; i<K; i++){
		cin >> a[i] >> b[i] >> c[i];
	}
	cout << search(1,1e9);
	
	//cout << cnt(125);
	return 0;
}

