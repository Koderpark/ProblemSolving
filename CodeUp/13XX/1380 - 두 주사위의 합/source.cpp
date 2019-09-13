#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<n; i++){
		for(int j=0; j<n; j++){
			if(i+j == n && i <= 6 && j <= 6){
				printf("%d %d\n", i, j);
			}
		}
	}
	return 0;
}
