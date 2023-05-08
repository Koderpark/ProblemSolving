#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;
	cin >> N >> M;
	
	N /= 100;
	N *= 100;
	
	for(int i=0; i<=99; i++){
		if((N+i)%M == 0){
			printf("%02d", i);
			return 0;
		}
	}
	return 0;
}
