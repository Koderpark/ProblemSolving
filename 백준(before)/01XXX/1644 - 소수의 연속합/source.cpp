#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isprime[4567890] = {0};
vector<int> prime;

ll prefix[345678] = {0};

int main(){
	for(int i=2; i<=4000000; i++){
		if(isprime[i]) continue;
		prime.push_back(i);
		for(int j=2*i; j<=4000000; j+=i) isprime[j] = 1;
	}
	
	prefix[1] = 2;
	for(int i=1; i<prime.size(); i++) prefix[i+1] = prefix[i] + prime[i];
	
	//for(int i=0; i<10; i++) printf("%5d", prime[i]); puts("");
	//for(int i=0; i<10; i++) printf("%5d", prefix[i]);
	ll n;
	int s = 0;
	int e = 0;
	int ans = 0;
	
	scanf("%lld", &n);
	
	while(s <= e && e <= prime.size()){
		if(prefix[e]-prefix[s] == n) ans++;
		if     (prefix[e]-prefix[s] >= n) s++;
		else if(prefix[e]-prefix[s] <  n) e++;
	}
	
	//printf("{%d %d}", s, e);
	printf("%d", ans);
	return 0;
}
