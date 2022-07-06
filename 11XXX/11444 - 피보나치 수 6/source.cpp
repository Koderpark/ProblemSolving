#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;
typedef long long int ll;
typedef vector<vector<ll>> arr;

arr operator * (const arr &a, const arr &b){
	int n = a.size();
	arr c(n, vector<ll>(n));
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<n; k++) c[i][j] += (a[i][k] * b[k][j]);
			c[i][j] %= MOD;
		}
	}
	return c;
} 

int main(){
	ll n;
	scanf("%lld", &n);
	
	if(n==1){ printf("%d", n); return 0; }
	
	arr ans = {{1,0},{0,1}};
	arr tmp = {{1,1},{1,0}};
	
	while(n){
		if(n%2){ ans = ans * tmp; }
		tmp = tmp*tmp;
		n/=2;
	}
	printf("%lld", ans[0][1]);
	return 0;
}
