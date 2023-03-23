#include <bits/stdc++.h>
using namespace std;

int arr[123456] = {0};

int main(){
	int N;
	cin >> N;
	for(int i=0; i<N; i++) cin >> arr[i];
	
	sort(arr, arr+N, greater<int>());
	
	int ans = 0;
	int i;
	for(i=0; i+1<N; i+=3){
		ans += arr[i];
		ans += arr[i+1];
		//printf("{%d %d} ", arr[i], arr[i+1]);
	}
	for(int j=i; j<N; j++){
		ans += arr[j];
		//printf("{%d} ", arr[j]);
	}
	cout << ans;
	return 0;
}
