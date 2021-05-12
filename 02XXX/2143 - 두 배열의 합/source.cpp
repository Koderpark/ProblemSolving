#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int t,n,m;

int a[1234] = {0};
int b[1234] = {0};

ll var;
ll ans = 0;
map<ll,ll> prefix;

int main(){
	scanf("%d", &t);
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	scanf("%d", &m);
	for(int i=0; i<m; i++) scanf("%d", &b[i]);
	
	//for(int i=0; i<n; i++) printf("%3d", a[i]);puts("");
	//for(int i=0; i<m; i++) printf("%3d", b[i]);puts("");
	
	
	for(int i=0; i<n; i++){
		var = 0;
		for(int j=i; j<n; j++){
			var += a[j];
			if(prefix.find(var) == prefix.end()) prefix.insert({var,1});
			else prefix[var]++;
		}
	}
	
	for(int i=0; i<m; i++){
		var = 0;
		for(int j=i; j<m; j++){
			var += b[j]; 
			if(prefix.find(t-var) != prefix.end()) ans += prefix[t-var];
		}
	}
	printf("%lld", ans);
	return 0;
}
