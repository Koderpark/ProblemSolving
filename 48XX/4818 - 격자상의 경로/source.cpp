#include <stdio.h>
#include <math.h>

int way(int cx, int cy, int x, int y){
	if(cx == x && cy == y) return 1;
	if(cx > x || cy > y) return 0;
	return way(cx+1,cy,x,y) + way(cx,cy+1,x,y);	
}

int main(){
	int n,m,k,width=0,height=0;
	scanf("%d %d %d", &n, &m, &k);
	
	height = ceil((float)k/m);
	for(int i=k; i>0; i-=m)width=i;
	
	printf("%d", way(1,1,width,height) * way(width,height,m,n));
	return 0;
}
