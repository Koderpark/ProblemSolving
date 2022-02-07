#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,n;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		printf("%d ", n/25); n%=25;
		printf("%d ", n/10); n%=10;
		printf("%d ", n/5); n%=5;
		printf("%d\n", n);
	}
	return 0;
}
