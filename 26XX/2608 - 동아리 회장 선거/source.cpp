#include <stdio.h>
#include <math.h> 
int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<pow(2,n); i++,puts("")){
		for(int j=n-1; j>=0; j--){
			printf("%c", (i>>j)&1 ? 'X': 'O');
		}
	}
	return 0;
}
