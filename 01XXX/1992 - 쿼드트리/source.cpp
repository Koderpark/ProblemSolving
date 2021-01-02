#include <stdio.h>

#define cx (sx+ex)/2
#define cy (sy+ey)/2

char arr[65][65];

int chk(int sx,int sy,int ex,int ey,int n){
	int tmp = 0;
	for(int i=sx; i<=ex; i++){
		for(int j=sy; j<=ey; j++){
			tmp+=arr[i][j];
		}
	}
	if(tmp==0) return 0;
	if(tmp==n) return 1;
	return 2;
}

void quad(int sx,int sy, int ex, int ey,int n){
	if(sx > ex) return;
	if(sy > ey) return;
	int tmp = chk(sx,sy,ex,ey,n);
	if(tmp!=2){ printf("%d", tmp); return; }
	
	printf("(");
	quad(sx,sy,cx,cy,n/4);
	quad(sx,cy+1,cx,ey,n/4);
	quad(cx+1,sy,ex,cy,n/4);
	quad(cx+1,cy+1,ex,ey,n/4);
	printf(")");
	return;
}

int main(){
	int n;
	char trash;
	scanf("%d\n", &n);
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			scanf("%c", &arr[i][j]);
			arr[i][j] -= '0';
		}
		scanf("%c", &trash);
	}
	quad(0,0,n-1,n-1,n*n);
	return 0;
}
