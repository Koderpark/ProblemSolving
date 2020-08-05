#include <stdio.h>

int main(){
	int n,t,c,p,day=1,cnt=0;
	scanf("%d %d %d %d", &n, &t, &c, &p);
	while(day+t <= n){
		cnt+=c;
		day+=t;
	}
	printf("%d", cnt*p);
	return 0;
}
