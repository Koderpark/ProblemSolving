#include <stdio.h>

int main(){
	int n;
	int k;
	int a;
	int max = -1001;
	scanf("%d %d", &n, &k);
	
	for(int i=0; i<n; i+=k){
		for(int j=0; j<k; j++){
			scanf("%d", &a);
			if(max < a){
				max = a;
			}
		}
		printf("%d ", max);
		max = -1001;
	}
	return 0;
}
