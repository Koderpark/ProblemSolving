#include <stdio.h>

int main(){
	int n;
	for(int i=1; i<=5000000; i++){
		scanf("%d", &n);
		if(i%50 == 0) printf("%d ", n);
	}
	return 0;
}
