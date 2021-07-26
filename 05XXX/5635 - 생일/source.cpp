#include <bits/stdc++.h>
using namespace std;

pair<int,string> arr[123];

int main(){
	string tmp;
	int n,a,b,c;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> tmp >> a >> b >> c;
		arr[i].first = c*10000 + b*100 + a;
		arr[i].second = tmp;
	}
	
	sort(arr, arr+n);
	
	cout << arr[n-1].second << '\n';
	cout << arr[0].second;
	return 0;
}
