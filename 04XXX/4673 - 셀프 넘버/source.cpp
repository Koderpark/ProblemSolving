#include <stdio.h>

bool a[10001] = {0};

int f(int a){
	int sum=a;
	while(a != 0){
		sum+=a%10;
		a/=10;
	}
	return sum;
}

int main(){
	for(int i=1; i<10001; i++) if(f(i) < 10001) a[f(i)] = 1;
	for(int i=1; i<10001; i++) if(a[i] == 0) printf("%d\n", i);
	return 0;
}
