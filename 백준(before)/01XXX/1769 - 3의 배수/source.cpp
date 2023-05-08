#include <bits/stdc++.h>
using namespace std;

int f(int k){
	int ans = 0;
	while(k){
		ans += k%10;
		k/=10;
	}
	return ans;
}

int main(){
	int N;
	int cnt = 0;
	cin >> N;
	while(N>=10){
		N = f(N);
		cnt++;
	}
	cout << cnt << "\n";
	if(N%3 == 0) cout << "YES";
	else cout << "NO"; 
	return 0;
}
