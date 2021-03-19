#include <stdio.h>

int find(int x, int y, int sum){
	if(!x&&!y) return 1;
	return f(x-1,y,sum+1)+f(x,y-1,sum+1);
}

int main(){
	int x,y;
	scanf("%d %d", &x, &y);
	return 0;
}
