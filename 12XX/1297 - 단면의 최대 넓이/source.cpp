#include <stdio.h>

int main(){
	int maxs = 0, bending = 0;
	int n;
	scanf("%d", &n);
	for(int i=n/2; i>0; i--){
		if(maxs <= (n-(2*i))*i){
			maxs = (n-(2*i))*i;
			bending = i;
		}
			
	}
	printf("%d", bending);
}
