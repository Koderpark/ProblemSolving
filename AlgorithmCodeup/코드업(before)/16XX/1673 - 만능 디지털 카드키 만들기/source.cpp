#include <stdio.h>

int gcd(int i, int j){
	int t;
	while (j){
		t = i%j;
		i = j;
		j = t;
	}
	return i;
}

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", gcd(gcd(a,b),c));
	return 0;
}
