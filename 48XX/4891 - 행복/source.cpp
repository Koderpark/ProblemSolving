#include <stdio.h>

int n,a;
int max=-1;
int min=1001;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		if(max < a) max = a;
		if(min > a) min = a;
	}
	printf("%d", max-min);
}
