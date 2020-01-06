#include <stdio.h>

int check(int a){
	int n1 = a/100;
	int n2 = (a/10)%10;
	int n3 = a%10;
	if(n1-n2 == n2-n3) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	if(n<=99) printf("%d", n);
	else{
		int sum=99;
		for(int i=100; i<=n; i++){
			if(check(i)){
				sum++;
			}
		}
		printf("%d", sum);
	}
	return 0;
}
