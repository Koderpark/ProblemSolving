#include <stdio.h>

int main(){
	int n,sum=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		if(i%10==1){
			sum++;
		}
	}
	printf("%d", sum);
	return 0;
}
