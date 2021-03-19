#include <bits/stdc++.h>
#define MAX 1234567890
using namespace std;

int dp[1234567] = {0};
int sa[1234567] = {0}; //save

int main(){
	int n;
	scanf("%d", &n);
	for(int i=2; i<=n; i++){
		dp[i] = MAX;
		if(!(i%3))if(dp[i] > dp[i/3]+1){ dp[i] = dp[i/3]+1; sa[i] = i/3; }
		if(!(i%2))if(dp[i] > dp[i/2]+1){ dp[i] = dp[i/2]+1; sa[i] = i/2; }
		          if(dp[i] > dp[i-1]+1){ dp[i] = dp[i-1]+1; sa[i] = i-1; }
	}
	
	printf("%d\n", dp[n]);
	int idx = n;
	while(idx!=1){
		printf("%d ", idx);
		idx = sa[idx];
	}
	printf("1");
	return 0;
}
