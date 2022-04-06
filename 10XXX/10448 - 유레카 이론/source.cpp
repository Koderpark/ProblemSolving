#include <bits/stdc++.h>
using namespace std;

int prefix[1234] = {0};

int main(){
	for(int i=1; i<=45; i++){
		prefix[i] = prefix[i-1]+i;
	}
	
	int n,val;
	cin >> n;
	while(n--){
		cin >> val;
		for(int i=1; i<=45; i++){
			for(int j=1; j<=45; j++){
				for(int k=1; k<=45; k++){
					if(val == prefix[i]+prefix[j]+prefix[k]){
						cout << "1\n";
						goto re; 
					}
				}
			}
		}
		cout << "0\n";
		re:;
	}
	return 0;
}
