#include <bits/stdc++.h>
using namespace std;

int sleve[567890] = {0};
int dp[56][567890] = {0}; // dp i j => i번째 수 더할때의 만들수있는지 여부. 
int arr[56] = {0};
int chk[12345] = {0};

vector<int> in;

int main(){
	sleve[0] = 1;
	sleve[1] = 1;
	for(int i=2; i<=500000; i++){
		if(sleve[i] == 0){
			for(int j=i+i; j<=500000; j+=i) sleve[j] = 1;
		}
	}
	
	in.push_back(0);
	int n,a;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &a); 
		if(chk[a] == 0) in.push_back(a);
		chk[a]++;
	}
	
	n = in.size()-1;
	//printf("%d\n", n);
	//for(int i=1; i<=n; i++) printf("{%d %d} ", in[i], chk[in[i]]); puts("");
	
	dp[0][0] = 1;
	for(int i=1; i<=n; i++){
		for(int j=0; j<=500000; j++){
			if(dp[i-1][j] == 0) continue;
			for(int k=0; k<=chk[in[i]]; k++){
				if(j+k*in[i] <= 500000) dp[i][j+k*in[i]] += dp[i-1][j];
			}
		}
	}
	
	int ans = 0;
	for(int i=2; i<=500000; i++){
		if(sleve[i] == 0 && dp[n][i]){
			//printf("[%d %d]", i, dp[n][i]);
			ans+=dp[n][i];
		}
	}
	printf("%d", ans);
	return 0;
}
