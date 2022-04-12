#include <bits/stdc++.h>
using namespace std;

int arr[1234567] = {0};

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++) cin >> arr[i];
	
	sort(arr, arr+n);
	
	for(int i=0; i<n; i++) cout << arr[i] << "\n";
	return 0;
}
