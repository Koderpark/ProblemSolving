#include <stdio.h>

int a[1000001] = {0};

int main(){
	int n,x,y,j;
	long long int cnt=0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	scanf("%d %d", &x, &y);
	
	for(int i=0; i<n; i++, cnt++){
		a[i] -= x;
		if(a[i] <= 0) continue; // 부감독관이 필요없음 
		
		if(a[i] % y == 0) cnt += a[i]/y;
		else 			  cnt += a[i]/y+1; 
	}
	printf("%lld", cnt);
	return 0;
}
