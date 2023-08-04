#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int arr[1234567] = {0};

ll mul(int k){ return (ll)(k*k); }

int main(){
	int N,a;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr+N, greater<int>());
	
	for(int i=0; i<N-2; i++){
		if(arr[i] < arr[i+1] + arr[i+2]){
			cout << arr[i+2]+arr[i+1]+arr[i];
			return 0;
		}
	}
	
	cout << -1;
	return 0;
}
