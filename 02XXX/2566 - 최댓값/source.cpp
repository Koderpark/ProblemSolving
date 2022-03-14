#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, maxv = -1, x, y;
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			cin >> k;
			maxv = max(maxv, k);
			
			if(k == maxv){
				x = i;
				y = j;
			}
		}
	}
	cout << maxv << "\n" << x << " " << y;
	return 0;
}
