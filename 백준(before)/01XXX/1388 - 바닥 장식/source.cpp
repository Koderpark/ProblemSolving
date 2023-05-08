#include <bits/stdc++.h>
using namespace std;

char arr[56][56] = {0};

void dfs(int x, int y, int dir){
	arr[x][y] = 0;
	if(dir == 0){ // -
		//반대쪽탐색안해도되내요 개꿀 ㅋㅋ 
		if(arr[x][y+1] == '-') dfs(x,y+1,0);
	}
	
	if(dir == 1){ // |
		if(arr[x+1][y] == '|') dfs(x+1,y,1);
	}
	return;
}

int main(){
	
	int n,m;
	char tmp;
	int ans = 0;
	
	scanf("%d %d\n", &n,&m);
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			scanf("%c", &arr[i][j]);
		}
		scanf("%c", &tmp);
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(arr[i][j] != 0){
				if(arr[i][j] == '-') dfs(i,j,0);
				if(arr[i][j] == '|') dfs(i,j,1);
				ans++;
				//printf("[%d %d]\n", i,j);
			}
		}
	}
	
	printf("%d", ans);
	return 0;
}
