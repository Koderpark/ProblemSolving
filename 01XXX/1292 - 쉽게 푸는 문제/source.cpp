#include <stdio.h>

int arr[10001] = {0};


int main(){
	int tmp=1,a,b,sum=0;
	for(int i=1; i<=100; i++){
		for(int j=1; j<=i; j++){
			arr[tmp] = i;
			tmp++;
		}
	}
	scanf("%d %d", &a, &b);
	for(int i=a; i<=b; i++){
		sum+=arr[i];
	}
	printf("%d", sum);
	return 0;
}
