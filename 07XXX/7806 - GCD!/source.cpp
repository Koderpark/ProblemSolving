#include <stdio.h>

int main(){
	int n,k;
	while(scanf("%d %d", &n, &k) == -1){
		for(int i=n; i>=1; i--){
			if(k%i == 0){
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}
