#include <bits/stdc++.h>
using namespace std;

int main(){
	int ans = 0;
	int streak = 0;
	int N,a;
	
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a;
		if(a == 0){
			streak = 0;
		}
		if(a == 1){
			streak++;
			ans += streak;
		}
	}
	
	cout << ans;
	return 0;
}
