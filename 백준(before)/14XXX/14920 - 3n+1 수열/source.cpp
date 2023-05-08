#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int ans = 1;
	cin >> n;
	while(n!=1){
		ans++;
		if(n%2==0) n/=2;
		else if(n%2==1) n=n*3+1;
	}
	cout << ans;
	return 0;
}
