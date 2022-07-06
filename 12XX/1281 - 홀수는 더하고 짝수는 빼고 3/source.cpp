#include <stdio.h>

int main(){
	int a,b,sum=0;
	scanf("%d %d", &a, &b);
	for(int i=a; i<=b; i++){
		if(i%2==0){
			printf("-%d", i);
			sum-=i;
		}
		if(i%2==1){
			if(i==a){
				printf("%d", i);
			}else{
				printf("+%d", i);
			}
			sum+=i;
		}
	}
	if(sum>0){
		printf("=+%d", sum);
	}else{
		printf("=%d", sum);
	}
	return 0;
}
