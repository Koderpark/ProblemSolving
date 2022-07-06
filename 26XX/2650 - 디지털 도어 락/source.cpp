#include <stdio.h>

int main(){
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	for(int i=1000; i>=1; i--){
		if(a%i==0 && b%i==0 && c%i==0){
			printf("%d", i);
			return 0;
		}
	}
}
