#include <stdio.h>

int k[101] = {0};
int n;
int a;

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &k[i]);
	}
	for(int i=0; i<n; i+=2){
		printf("%d ", k[i]<k[i+1]?k[i+1]:k[i]);
	}
	return 0;
}
