#include <stdio.h>
#include <utility>
#include <algorithm>

using namespace std;

pair<int,int> dp[1234] = {{0,0},};
int arr[1234] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i=1; i<=n; i++){
		int a=0,b=0;
		for(int j=1; j<=i; j++){
			if(arr[j] < arr[i] && dp[j].first > a){
				a = dp[j].first;
				b = j;
			}
		}
		dp[i] = {a+arr[i],b};
	}

	int ans = 0;
	for(int i=1; i<=n; i++) ans = max(ans, dp[i].first);
	printf("%d", ans);
	return 0;
}
