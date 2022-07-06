#include <bits/stdc++.h>
using namespace std;

bool ans[6789][3456] = {0};

void fill(int x, int y, int k){
	if(k!=3){
		fill(x, y, k/2);
		fill(x-(k/2),y+(k/2),k/2);
		fill(x+(k/2),y+(k/2),k/2);
		return;
	}
	ans[x][y] = 1;
	ans[x+1][y+1] = 1;
	ans[x-1][y+1] = 1;
	ans[x+2][y+2] = 1;
	ans[x+1][y+2] = 1;
	ans[x][y+2] = 1;
	ans[x-1][y+2] = 1;
	ans[x-2][y+2] = 1;
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	fill(n,1,n);
	
	for(int i=1; i<=n; i++,puts("")){
		for(int j=1; j<=2*n-1; j++){
			printf("%c", ans[j][i]?'*':' ');
		}
	}
	return 0;
}
