#include <stdio.h>

char hexarray[17] = "0123456789ABCDEF";

void f(int a,int b){
	if(!a) return;
	f(a/b,b);
	printf("%c", hexarray[a%b]);
}

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	f(n,k);
	return 0;
}
