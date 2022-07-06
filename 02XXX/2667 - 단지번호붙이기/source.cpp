#include <stdio.h>
#include <algorithm>

int arr[1001] = {0};
char map[31][31] = {0};
int cnt=0, ret=0;

int dfs(int x, int y){
	ret+=1;
	map[x][y] = 0;
	if(map[x+1][y] == '1')dfs(x+1,y);
	if(map[x-1][y] == '1')dfs(x-1,y);
	if(map[x][y+1] == '1')dfs(x,y+1);
	if(map[x][y-1] == '1')dfs(x,y-1);
	return ret;
}

int main(){
	char tmp;
	int n,t=0;
	scanf("%d\n", &n);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			scanf("%c", &map[i][j]);
		}
		scanf("%c", &tmp);
	}
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(map[i][j] == '1'){
				cnt++;
				ret=0;
				arr[t] = dfs(i,j);
				t++;
			}
		}
	}
	printf("%d\n", cnt);
	std::sort(arr, arr+t);
	for(int i=0; i<t; i++) printf("%d\n", arr[i]);
	return 0;
}
