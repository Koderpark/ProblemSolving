#include <stdio.h>

int main(){
	int n,pos=1,cnt=1,i=0;
	scanf("%d", &n);
	while(1){
		if(n<=pos) break;
		i+=6;
		pos+=i;
		cnt++;
	}
	printf("%d", cnt);
	return 0;
}
