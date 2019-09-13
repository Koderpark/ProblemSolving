#include <stdio.h>

int main(){
	int n,a,sum=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		if(a%5 == 0){
			sum+=a;
		}
	}
	printf("%d", sum);
	return 0;
}
