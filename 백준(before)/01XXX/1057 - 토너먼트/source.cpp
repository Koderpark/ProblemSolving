#include <stdio.h>
int main(){
	int n,a,b;
	int ans=0;
	scanf("%d %d %d",&n,&a,&b);
	while(a!=b){
		ans++;
		a = (a+1)/2;
		b = (b+1)/2;
	}
	printf("%d", ans);
	return 0;
}
