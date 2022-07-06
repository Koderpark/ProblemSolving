#include <stdio.h>

int main(){
	int n,sum=0;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			for(int k=j; k<=n; k++){
				if(i+j+k==n && k < i+j){
					sum++;
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}
