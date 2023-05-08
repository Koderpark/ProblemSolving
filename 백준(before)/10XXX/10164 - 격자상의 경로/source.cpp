#include<stdio.h>

int f(int x,int y, int px, int py){
	if(x == px && y == py) return 1;
	if(x > px || y > py) return 0;
	return f(x+1,y,px,py) + f(x,y+1,px,py);
}

int main(){
	int n,m,k;
	scanf("%d %d %d", &n, &m, &k);
	if(k==0) printf("%d", f(1,1,n,m));
	else{
		int h=(k-1)/m;
		int w=(k-1)%m;
		printf("%d", f(1,1,h+1,w+1)*f(h+1,w+1,n,m));
	}
	return 0;
}
