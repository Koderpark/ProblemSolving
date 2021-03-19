#include <stdio.h>

#define INF 1000000007

typedef long long int ll;

int road[123456] = {0};
int oil[123456]  = {0};

int min(int a, int b){return a>b?b:a;}

int main(){
	int oilvalue = INF;
	int n;
	ll ans = 0;
	
	scanf("%d", &n);
	for(int i=0; i<n-1; i++) scanf("%d", &road[i]);
	for(int i=0; i<n;   i++) scanf("%d", &oil[i]);
	
	for(int i=0; i<n-1; i++){
		oilvalue = min(oilvalue, oil[i]);
		ans += (ll)road[i] * (ll)oilvalue;
	}
	printf("%lld", ans);
	return 0;
}
