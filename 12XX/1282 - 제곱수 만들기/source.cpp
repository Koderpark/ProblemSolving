#include <stdio.h>

int main(){
	int n,k,t,min=123456789;
	scanf("%d", &n);
	for(int i=1; i*i<n; i++){
		k = n-(i*i);
		if(min > k){
			min = k;
			t = i;
		}
	}
	printf("%d %d", min, t);
	return 0;
}
