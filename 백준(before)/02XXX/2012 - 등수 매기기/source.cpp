#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[567890] = {0};

int main(){
	int N;
	ll ans = 0;
	
	cin >> N;
	for(int i=1; i<=N; i++){
		cin >> arr[i];
	}
	
	sort(arr+1, arr+N+1);
	
	for(int i=1; i<=N; i++){
		ans += abs(i-arr[i]);
	}
	
	cout << ans;
	return 0;
}
