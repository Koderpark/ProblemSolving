#include <bits/stdc++.h>
#define INF 123456789
using namespace std;
typedef long long int ll;

ll arr[123456] = {0};
ll sum;

int main(){
	ll n,s;
	scanf("%lld %lld", &n, &s);
	for(int i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}
	
	int ptr1=1;
	int ptr2=1;
	int len =0;
	int ans=INF;
	while(true){
		if(sum >= s){
			ans = min(ans, len--);
			sum -= arr[ptr1];
			ptr1++;
		}else{
			if(ptr2==n+1) break;
			sum += arr[ptr2];
			ptr2++;
			len++;
		}
	}
	printf("%d", ans==INF?0:ans);
	return 0;
}
