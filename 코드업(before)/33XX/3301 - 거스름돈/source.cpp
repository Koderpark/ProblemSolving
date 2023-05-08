#include <stdio.h>

int main(){
	int n;
	int time=0;
	scanf("%d", &n);
	for(;n>=50000; n-=50000) 	time++;
	for(;n>=10000; n-=10000) 	time++;
	for(;n>=5000; n-=5000)   	time++;
	for(;n>=1000; n-=1000)		time++;
	for(;n>=500; n-=500)		time++;
	for(;n>=100; n-=100)		time++;
	for(;n>=50; n-=50)			time++;
	for(;n>=10; n-=10)			time++;
	printf("%d", time);
	return 0;
}
