#include <stdio.h>

int main(){
	int t,h,w,n;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d %d %d", &h, &w, &n);
		printf("%d%02d\n", n%h?n%h:h, (n-1)/h+1);
	}
	return 0;
}
