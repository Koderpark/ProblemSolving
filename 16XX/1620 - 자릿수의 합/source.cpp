#include <stdio.h>

int f(int a){
	int r;
	int sum;
	for(r=0;a!=0;a/=10){
        r=a%10;
        sum+=r;
    }
    if(sum >= 10) return f(sum);
    return sum;
}

int main(){
	int n;
	scanf("%d", &n);
	
	printf("%d", f(n));
	
	return 0;
}
