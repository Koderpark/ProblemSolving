#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	int sum = 0;
	int ans = 0;
	cin >> a >> b;
	
	for(int i=0; i<a; i++){
		cin >> c;
		if(sum+c <= b){
			ans = i+1;
		}
		sum += c;
	}
	
	cout << ans;
	return 0;
}
