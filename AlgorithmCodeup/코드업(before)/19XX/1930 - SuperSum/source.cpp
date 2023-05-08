#include <stdio.h>

long long int data[15][15] ={0}; 

int SuperSum(int k, int n){
	if(k==0) return n;
	for(int i=1;i<=n;i++) {
        data[k][n] += SuperSum(n-1,i);
    }
	return data[k][n];
}

int main(){
	int k,n;
	while( scanf("%d %d", &k, &n) != EOF )
	printf("%d\n", SuperSum(k,n));
	return 0;
}
