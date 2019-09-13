#include <stdio.h>

int main(){
	long long int l;
	char arr[101] = {0};
	int i=0;
	
	scanf("%lld", &l);
	
	if(l == 0){	printf("0"); return 0;	}
	
	while(l > 0){
		arr[i++] = l%2;
		l /= 2;
	}
	for(i; i>0; i--) printf("%d", arr[i-1]);
	return 0;
}
