#include <stdio.h>
#include <vector>

using namespace std;

int min(int a, int b){return a>b?b:a;}

int dp[100000] = {0};
vector<int> square;

int main(){
	for(int i=1; i<=223; i++) square.push_back(i*i);
	for(int i=0; i<100000; i++) dp[i] = 1234567890;
	
	dp[0] = 0;
	for(int i=0; i<=50000; i++){
		for(int j=0; j<square.size(); j++){
			dp[i+square[j]] = min(dp[i+square[j]], dp[i]+1);
		}
	}
	int n;
	scanf("%d", &n);
	printf("%d", dp[n]);
}
