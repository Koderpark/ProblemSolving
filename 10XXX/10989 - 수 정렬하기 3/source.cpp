#include <stdio.h>

int sort[10001] = {0};

int main(){
	int n,k;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &k);
		sort[k]++;
	}
	for(int i=0; i<=10000; i++){
		if(sort[i] != 0){
			for(int j=0; j<sort[i]; j++){
				printf("%d\n",i);
			}
		}
	}
	return 0;
}
