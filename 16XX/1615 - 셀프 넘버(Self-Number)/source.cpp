#include <stdio.h>

int arr[5100] = {0};

int f(int a){
	int n=a, r, sum=0;
	for(r=0;a!=0;a/=10){
        r=a%10;
        sum+=r;
    }
    return n+sum;
}

int main(){
	int s,e;
	int sum = 0;
	scanf("%d %d", &s, &e);
	
	for(int i=1; i<=5000; i++)	arr[f(i)] = 1;
	for(int i=s; i<=e; i++)		if(!arr[i])		sum+=i;

	printf("%d", sum);
	return 0;
}
