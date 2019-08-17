#include <stdio.h>

int main(){
	int n;
	int k;
	int a;
	int min = 1001;
	scanf("%d %d", &n, &k);
	
	for(int i=0; i<n; i+=k){
		for(int j=0; j<k; j++){
			scanf("%d", &a);
			if(min > a){
				min = a;
			}
		}
		printf("%d ", min);
		min = 1001;
	}
	return 0;
}
