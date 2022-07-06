#include <stdio.h>

int main(){
	int k,n,sum=0;
	scanf("%d %d", &n, &k);
	if(n / k > 9999){
		printf("번호 초과 오류");
		return 0;
	}
	for(int i=k; i<=n; i+=k)printf("F-%04d\n", ++sum);
	return 0;
}
