#include <stdio.h>

int main(){
	int a,b,tmp,sum=0;
	scanf("%d %d", &a, &b);
	for(int i=a; i<=b; i++){
		tmp=i;
		while(tmp!=0){
			if(tmp%10==1) sum++;
			tmp/=10;
		}
	}
	printf("%d", sum);
	return 0;
}
