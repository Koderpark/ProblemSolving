#include <stdio.h>

int main(){
	int n,a,max=0,min=111;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		if(max < a) max = a;
		if(min > a) min = a;
	}
	printf("%d %d", max, min);
	return 0;
}
