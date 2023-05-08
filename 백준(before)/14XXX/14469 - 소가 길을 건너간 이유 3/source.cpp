#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

pair<int,int> arr[123];

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i].x >> arr[i].y;
	}
	
	sort(arr, arr+n);
	
	for(int i=1; i<=n; i++){
		arr[i].x = max(arr[i].x, (arr[i-1].x+arr[i-1].y));
	}
	cout << arr[n].x;
	return 0;
}
