#include <stdio.h>

int main(){
	int n,cnt=0;
	scanf("%d", &n);
	while(n > 0){
		if(n%5 == 0){
			cnt+=n/5;
			n=0;
		}
		else{
			n-=3;
			cnt++;
		}
	}
	if(n != 0) printf("-1");
	else printf("%d", cnt);
	return 0;
}
