#include <stdio.h>

int main(){
	int x,cnt=0;
	scanf("%d", &x);
	for(x; x>=64; x-=64) cnt++;
	for(x; x>=32; x-=32) cnt++;
	for(x; x>=16; x-=16) cnt++;
	for(x; x>=8;  x-=8 ) cnt++;
	for(x; x>=4;  x-=4 ) cnt++;
	for(x; x>=2;  x-=2 ) cnt++;
	for(x; x>=1;  x-=1 ) cnt++;
	printf("%d", cnt);
	return 0;
}
