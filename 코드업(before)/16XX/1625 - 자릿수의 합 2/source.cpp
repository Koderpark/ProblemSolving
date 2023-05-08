#include <stdio.h>

int f(int a){
	int r;
	int sum = 0;
	for(r=0;a!=0;a/=10){
        r=a%10;
        sum+=r;
    }
    if(sum >= 10) return f(sum);
    return sum;
}

int main(){
	int n;	
	int t;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &t);
		printf("%d\n", f(t));
	}
}
