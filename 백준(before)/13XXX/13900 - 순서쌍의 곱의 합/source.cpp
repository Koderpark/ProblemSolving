#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[123456];
ll sum = 0;
ll ans = 0;

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	
	for(int i=0; i<N; i++){
		ans += (arr[i] * (sum-arr[i]));
	}
	ans /= 2;
	
	cout << ans;
	return 0;
}
