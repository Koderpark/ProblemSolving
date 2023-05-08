#include <stdio.h>

int main(){
	int a,b;
	scanf("%d %d", &a, &b);
	if(a == b){
		printf("tie");
		return 0;
	}
	if(a+1 == b || a-2 == b){
		printf("win");
		return 0;
	}
	else{
		printf("lose");
		return 0;
	}
	return 0;
}
