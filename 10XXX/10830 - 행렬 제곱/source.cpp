#include <bits/stdc++.h>
#define MOD 1000
using namespace std;
typedef long long int ll;
typedef vector<vector<ll>> arr;

arr operator * (const arr &a, const arr &b){
	int n = a.size();
	arr v(n, vector<ll>(n));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++) v[i][j] += (a[i][k] * b[k][j]);
			v[i][j] %= MOD;
		}
	}
	return v;
}

arr f(arr v, ll k){
	if(k==1) return v;
	if(k%2) return v * f(v, k-1);
	
	arr tmp = f(v,k/2);
	return tmp * tmp;
}

int main(){
	ll n,k;
	scanf("%lld %lld", &n, &k);
	arr v(n, vector<ll>(n));
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%d", &v[i][j]);
		}
	}
	
	arr ans = f(v, k);
	for(int i=0; i<n; i++,puts("")){
		for(int j=0; j<n; j++){
			printf("%d ", ans[i][j] % MOD);
		}
	}
	return 0;
}
