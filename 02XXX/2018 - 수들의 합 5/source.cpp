#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//ll prefix[10000001] = {0};

int main(){
	//for(int i=1; i<=10000000; i++) prefix[i] = (ll)i*(i+1)/2;
	
	int N;
	cin >> N;
	
	ll s=0;
	ll e=1;
	int ans = 0;
	
	while(e<=N){
		ll len = e-s;
		ll val = s*len + len*(len+1)/2;
		
		if(val == N) ans++;
		if(val <= N) e++;
		if(val >  N) s++;
	}
	
	cout << ans;
	return 0;
}
