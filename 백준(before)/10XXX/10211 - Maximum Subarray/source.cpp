#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int T;
	cin >> T;
	while(T--){
		int N;
		int ans = -998244353;
		int arr[1234] = {0};
		int sum[1234] = {0};
		
		cin >> N;
		for(int i=1; i<=N; i++){
			cin >> arr[i];
			sum[i] = arr[i]+sum[i-1];
		}
		
		for(int i=0; i<=N; i++){
			for(int j=i+1; j<=N; j++){
				ans = max(ans, sum[j]-sum[i]);
			}
		}
		
		cout << ans << "\n";
	}
	
	return 0;
}
