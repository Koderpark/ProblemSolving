#include <bits/stdc++.h>
using namespace std;

int main(){
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			for(int k=0; k<=9; k++){
				if((10*j + k) * 2 == i*100 + k*11) printf("%d%d+%d%d=%d%d%d\n", j,k,j,k,i,k,k);
			}
		}
	}
}
