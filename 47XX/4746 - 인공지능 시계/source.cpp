#include <stdio.h>

int main(){
	int a,b,c,d;
	
	long long int time;
	
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d", &d);
	
	time = a*60*60 + b*60 + c + d;
	printf("%d %d %d", time/(60*60)%24, (time/60)%60, time%60);
	return 0;
}
