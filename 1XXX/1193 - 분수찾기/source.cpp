#include <stdio.h>

int main(){
	int a,b,n,i=0,pos=0,cnt=0;
	scanf("%d", &n);
	while(1){
		if(pos >= n) break;
		pos+=++i;
		cnt++;
	}
	//printf("%d", cnt);
	if(cnt%2==0)printf("%d/%d",cnt-pos+n, pos-n+1);
	else printf("%d/%d",pos-n+1,cnt-pos+n);
}
