#include <stdio.h>

int main(){
	int a,b,c,res;
	scanf("%d %d %d", &a, &b, &c);
	for(res=1; true; res++){
		if((res-a)%15==0 && (res-b)%28==0 && (res-c)%19==0) break;
	}
	printf("%d", res);
	return 0;
}
