#include <bits/stdc++.h>
using namespace std;

bool ans[12345][12345] = {0};

void fill(int sx, int sy, int len){
	if(len==1){ ans[sx][sy] = 1; return;}
	
	int k = len/3;
	
	fill(sx     ,sy     , k);
	fill(sx     ,sy+k   , k);
	fill(sx     ,sy+k+k , k);
	fill(sx+k   ,sy     , k);
	fill(sx+k   ,sy+k+k , k);
	fill(sx+k+k ,sy     , k);
	fill(sx+k+k ,sy+k   , k);
	fill(sx+k+k ,sy+k+k , k);
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	
	fill(1,1,n);
	
	for(int i=1; i<=n; i++,puts("")){
		for(int j=1; j<=n; j++){
			printf("%c",ans[i][j]?'*':' ');
		}
	}
	return 0;
}
