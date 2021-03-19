#include <stdio.h>

int gcd(int a, int b){
	int t;
	while(b){
		t = a%b;
		a = b;
		b = t;
	}
	return a;
}

int main(){
	int a,b,k;
	scanf("%d %d", &a, &b);
	k = gcd(a,b);
	printf("%d %d", a/k, b/k);
	return 0;
}
