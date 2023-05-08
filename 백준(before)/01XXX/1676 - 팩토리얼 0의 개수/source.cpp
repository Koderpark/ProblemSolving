#include <stdio.h>

int two=0,five=0;

int f(int k){
	while(k%2==0){
		k/=2;
		two++;
	}
	while(k%5==0){
		k/=5;
		five++;
	}
	return 0;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=n; i>=1; i--){
		f(i);
	}
	printf("%d", two>five?five:two);
	return 0;
}
