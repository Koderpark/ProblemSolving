#include <bits/stdc++.h>
using namespace std;

int cnt;
int r,c;

void find(int x, int y, int l, int idx){
	if(l==1){
		if(x==c && y==r) printf("%d", idx);
		return;
	}
	
	int m = (l)/2;
	if(x  <=c&&c<=x+m && y  <=r&&r<=y+m) find(x,   y,   m, idx);
	if(x+m<=c&&c<=x+l && y  <=r&&r<=y+m) find(x+m, y,   m, idx+m*m);
	if(x  <=c&&c<=x+m && y+m<=r&&r<=y+l) find(x,   y+m, m, idx+m*m*2);
	if(x+m<=c&&c<=x+l && y+m<=r&&r<=y+l) find(x+m, y+m, m, idx+m*m*3);
	return;
}

int main(){
	int n;
	scanf("%d %d %d", &n, &r, &c);
	find(0,0,1<<n,0);
	return 0;
}
