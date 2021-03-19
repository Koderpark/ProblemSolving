#include <stdio.h>

int main(){
	int first, last, k;
	scanf("%d %d %d", &first, &last, &k);
	int gap = last - first, sum=first;
	while(sum <= k){
		printf("%d ", sum);
		sum+=gap;
	}
	return 0;
}
