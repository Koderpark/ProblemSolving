#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	int b;
	int sum;
	int minv;
	
	cin >> a;
	while(a--){
		sum = 0;
		minv = 998244353;
		
		for(int i=0; i<7; i++){
			cin >> b;
			if(b%2 == 0){
				sum += b;
				minv = min(minv,b);
			}
		}
		cout << sum << " " << minv << "\n";
	}
	return 0;
}
