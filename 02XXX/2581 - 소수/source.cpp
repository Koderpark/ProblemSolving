#include <stdio.h>

int main(){
	int m,n,logic,sum=0,min=10001;
	scanf("%d %d", &m, &n);
	for(int i=m; i<=n; i++){
		logic=1;
		if(i==1) logic=0;
		for(int j=2; j*j<=i; j++) if(i%j == 0) logic=0;
		if(logic){
			if(min > i) min = i;
			sum+=i;
		}	
	}
	if(min == 10001) printf("-1");
	else printf("%d\n%d", sum, min);
	return 0;
}
