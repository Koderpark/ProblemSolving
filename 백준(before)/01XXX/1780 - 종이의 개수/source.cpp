#include <bits/stdc++.h>
using namespace std;

int arr[2345][2345] = {0};
int p1=0;
int p2=0;
int p3=0;

int chk(int sx, int ex, int sy, int ey){
	bool c1 = true;
	bool c2 = true;
	bool c3 = true;
	
	for(int i=sx; i<=ex; i++){
		for(int j=sy; j<=ey; j++){
			if(arr[i][j] == 1){ c1 = false; c2 = false; }
			if(arr[i][j] == 0){ c1 = false; c3 = false; }
			if(arr[i][j] ==-1){ c2 = false; c3 = false; }
		}
	}
	
	if(c1 || c2 || c3){
		if(c1) p1++;
		if(c2) p2++;
		if(c3) p3++;
		return true;
	}
	return false;
}

void f(int sx, int ex, int sy, int ey, int k){
	if(chk(sx,ex,sy,ey)) return;
	
	int v = k-1;
	
	f(sx, sx+v, sy, sy+v, k/3);
	f(sx, sx+v, sy+k, sy+v+k, k/3);
	f(sx, sx+v, sy+k+k, sy+v+k+k, k/3);
	
	f(sx+k, sx+v+k, sy, sy+v, k/3);
	f(sx+k, sx+v+k, sy+k, sy+v+k, k/3);
	f(sx+k, sx+v+k, sy+k+k, sy+v+k+k, k/3);
	
	f(sx+k+k, sx+v+k+k, sy, sy+v, k/3);
	f(sx+k+k, sx+v+k+k, sy+k, sy+v+k, k/3);
	f(sx+k+k, sx+v+k+k, sy+k+k, sy+v+k+k, k/3);
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) for(int j=1; j<=n; j++) scanf("%d", &arr[i][j]);
	
	f(1,n,1,n, n/3);
	
	printf("%d\n%d\n%d", p1,p2,p3);
	return 0;
}
