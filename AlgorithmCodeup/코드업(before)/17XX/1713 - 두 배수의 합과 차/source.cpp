#include <stdio.h>

int main(){
	int s,l,sum=0;
	scanf("%d %d", &s, &l);
	for(int i=s; i<=l; i++){
		if(i % 3 == 0 && i % 4 != 0) sum+=i;
		if(i % 4 == 0 && i % 3 != 0) sum-=i;
	}
	printf("%d", sum);
}
