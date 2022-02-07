#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int N;

int search(int s, int e){
	int mid = (s+e)/2;
	
	//printf("[%d %d %d]\n", s, e, mid);
	
	if(s==e) return s;
	
	ll tmp = mid;
	ll cnt = 0;
	while(tmp >= 5){
		tmp /= 5;
		cnt += tmp;
	}
	if(cnt >= N) return search(s, mid);
	else		 return search(mid+1, e);
}

int main(){
	cin >> N;
	int ans = search(1,5*1e8);
	
	
	ll tmp = ans;
	ll cnt = 0;
	while(tmp >= 5){
		tmp /= 5;
		cnt += tmp;
	}
	
	if(N == cnt) cout << ans;
	else cout << -1;
	
	return 0;
}
