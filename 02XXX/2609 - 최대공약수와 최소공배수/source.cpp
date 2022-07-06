#include <stdio.h>

int gcd(int a,int b){
	if(a%b == 0) return b;
	return gcd(b,a%b);
}

long long int lcd(int a, int b){
	int t = gcd(a,b);
	return t*(a/t)*(b/t);
}

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	printf("%d\n%d", gcd(a,b), lcd(a,b));
	return 0;
}
