#include <stdio.h>

int main(){
	int tmp=101, k, sum=0;
	for(int i=0; i<4; i++){
		scanf("%d", &k);
		sum+=k;
		if(tmp > k) tmp = k;
	}
	sum-=tmp;
	tmp= 101;
	for(int i=0; i<2; i++){
		scanf("%d", &k);
		sum+=k;
		if(tmp > k) tmp = k;
	}
	sum-=tmp;
	printf("%d", sum);
	return 0;
}
