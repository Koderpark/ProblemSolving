#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int maxv = 0;
	int maxi = 0;
	
	int a,b;
	for(int i=1; i<=5; i++){
		b = 0;
		for(int j=0; j<4; j++){
			cin >> a;
			b += a;
		}
		
		if(maxv < b){
			maxv = b;
			maxi = i;
		}
	}
	
	cout << maxi << " " << maxv;
}
