#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<n; i++, puts("")){
		for(int j=0; j<i; j++) printf("*");
	}
	for(int i=0; i<n; i++, puts("")){
		for(int j=i; j<n; j++) printf("*");
	}
	return 0;
}
