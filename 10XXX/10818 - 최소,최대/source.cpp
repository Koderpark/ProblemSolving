#include <stdio.h>

int main(){
	int n,max=-10000000,min=10000000,t;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &t);
		if(max < t) max = t;
		if(min > t) min = t;
	}
	printf("%d %d", min, max);
	return 0;
}
