#include <stdio.h>

int main(){
	int a,b,c,sum=0;
	scanf("%d %d %d", &a, &b, &c);
	for(int i=1; i<=a; i++){
		if(a%i==0&&b%i==0&&c%i==0){
			sum = i;
		}
	}
	printf("%d", sum);
	return 0;
}
