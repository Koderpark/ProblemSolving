#include <bits/stdc++.h>
using namespace std;

int arr[345678] = {0};
int diff[345678] = {0};

int main(){
	int n,k;
	cin >> n >> k;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(i){
			diff[i-1] = arr[i] - arr[i-1];
		}
	}
	
	sort(diff, diff+n-1);
	
	long long res = 0;
	for(int i=0; i<n-k; i++){
		res += diff[i];
	}
	cout << res;
	return 0;
}
