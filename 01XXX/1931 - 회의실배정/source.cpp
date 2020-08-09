#include <stdio.h>

int main(){
	int n,a,b,time=0,cnt=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &a, &b);
		if( time <= a ){
			time = b;
			cnt++;
		}
	}
	printf("%d", cnt);
}
