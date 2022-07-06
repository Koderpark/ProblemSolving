#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int a[123456] = {0};
int b[123456] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) scanf("%d", &b[i]);
	
	ll ans = 0;
	for(int i=0; i<n; i++){
		ans += (max(b[i]-a[i], 0)+29)/30;
	}
	printf("%lld", ans);
	return 0;
}
