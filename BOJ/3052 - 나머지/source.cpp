#include <stdio.h>

int check[43] = {0};

int main(){
	int a,sum=0;
	for(int i=0; i<10; i++){
		scanf("%d", &a);
		check[a%42] = 1;
	}
	for(int i=0; i<43; i++){
		sum+=check[i];
	}
	printf("%d", sum);
	return 0;
}
