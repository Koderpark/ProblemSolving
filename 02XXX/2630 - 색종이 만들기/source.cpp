#include <stdio.h>

int arr[160][160] = {0};
int white;
int blue;

int check(int sx,int ex,int sy, int ey){
	int tmp = 0;
	for(int i=sx; i<=ex; i++){
		for(int j=sy; j<=ey; j++) tmp += arr[i][j];
	}
	return tmp;
}

void divide(int sx,int ex,int sy,int ey,int size){
	int val = check(sx,ex,sy,ey);
	if(val == size){
		blue++;
		return;
	}
	if(val == 0){
		white++;
		return;
	}
	
	int mx = (sx+ex)/2;
	int my = (sy+ey)/2;
	
	divide(sx,mx,sy,my,    size/4);
	divide(sx,mx,my+1,ey,  size/4);
	divide(mx+1,ex,sy,my,  size/4);
	divide(mx+1,ex,my+1,ey,size/4);
	
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) scanf("%d", &arr[i][j]);
	}
	
	divide(1,n,1,n,n*n);
	printf("%d\n%d", white,blue);
}
