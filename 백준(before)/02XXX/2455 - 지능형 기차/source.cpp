#include <stdio.h>

int main(){
	int max=-1,a,b,money=0;
	for(int i=0; i<4; i++){
		scanf("%d %d", &a, &b);
		money = money - a + b;
		if(max < money){
			max = money;
		}
	}
	printf("%d", max);
	return 0;
}
