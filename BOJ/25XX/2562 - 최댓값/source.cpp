#include <stdio.h>

int main(){
	int a,b,max=0;
	for(int i=0; i<9; i++){
		scanf("%d", &a);
		if(max < a){
			max = a;
			b = i+1;
		}
	}
	printf("%d %d", max, b);
	return 0;
}
