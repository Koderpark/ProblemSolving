#include <bits/stdc++.h>
#define INF 123456890
using namespace std;

int arr[12][12] = {0};
vector<int> v;

int main(){
	int n;
	int sum;
	int ans = INF;
	
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=1; i<=n; i++) v.push_back(i);
	
	do{
		sum = 0;
		for(int i=1; i<n; i++){
			if(arr[v[i-1]][v[i]] == 0) goto end;
			sum += arr[v[i-1]][v[i]];
		}
		if(arr[v[n-1]][v[0]] == 0) goto end;
		sum += arr[v[n-1]][v[0]];
		ans = min(ans, sum);
		end:;
	}while(next_permutation(v.begin(), v.end()));
	
	printf("%d", ans);
	return 0;
}
