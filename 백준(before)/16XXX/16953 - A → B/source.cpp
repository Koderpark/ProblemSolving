#include <stdio.h>

int min(int a, int b){ return a>b?b:a;}

int find(int s, int e, int k){
	//printf("%d\n", s);
	if(s==0) return -1;
	if(s==e) return k;
	
	if(s%10 == 1) return find(s/10,e,k+1);
	if(s%2  == 0) return find(s/2 ,e,k+1);
	return -1;
}

int main(){
	int A,B;
	scanf("%d %d", &A, &B);
	printf("%d", find(B,A,1));
	return 0;
}
