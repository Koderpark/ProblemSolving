#include <stdio.h>

int chk[11] = {0};

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<10; i++){
		chk[i]+=n/10;
	}
	for(int i=0; i<10; i++){
		printf("%d ", chk[i]);
	}
}
