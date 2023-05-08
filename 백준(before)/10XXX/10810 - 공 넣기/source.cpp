#include <bits/stdc++.h>
using namespace std;

int arr[123] = {0};

int main(){
	int n,m,a,b,c;
	cin >> n >> m;
	for(int i=0; i<m; i++){
		cin >> a >> b >> c;
		for(int j=a; j<=b; j++) arr[j] = c;
	}
	
	for(int i=1; i<=n; i++) cout << arr[i] << " ";
	return 0;
}
