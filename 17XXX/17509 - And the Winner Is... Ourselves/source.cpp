#include <bits/stdc++.h>
using namespace std;

pair<int,int> arr[12];

int main(){
	
	for(int i=0; i<11; i++){
		cin >> arr[i].first >> arr[i].second;
	}
	
	sort(arr, arr+11);
	
	int ans = 0;
	int val = 0;
	for(int i=0; i<11; i++){
		ans += (arr[i].first)*(11-i);
		val += arr[i].second;
	}
	ans += val*20;
	cout << ans;
	return 0;
}
