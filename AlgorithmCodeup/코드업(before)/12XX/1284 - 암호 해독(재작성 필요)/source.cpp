#include <stdio.h>

int F(int n){
    int i=2;
    while(i^n&&n%i)++i;
    if(i^n)return 0;
    return n;
}

int main(){
	int i,n;
    scanf("%d",&n);
    if(n==1){
    	printf("wrong number");
    	return 0;
	}
    for(i=2;i^n;i++) if(n%i==0) if(F(i)&&F(n/i)) break;
    
	if(i^n)printf("%d %d",i,n/i);
	else printf("wrong number");
	return 0;
}
