#include <stdio.h>

int main(){
	int n;
	int logic=1;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			for(int k=j; k<=n; k++){
				if(i+j+k == n && i+j > k){
					printf("%d %d %d\n", i,j,k);
					logic = 0;
				} 
			}
		}
	}
	if(logic)	printf("-1");
	
	return 0;
}
