#include <bits/stdc++.h>
using namespace std;

int arr[6][6] = {0};
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};
set<int> st;

void dfs(int x, int y, int num, int len){
	if(len == 6){
		st.insert(num);
		return;
	}
	
	for(int i=0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(1<=nx && nx<=5 && 1<=ny && ny<=5){
			dfs(nx,ny,num*10+arr[nx][ny],len+1);
		}
	}
}

int main(){
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i=1; i<=5; i++){
		for(int j=1; j<=5; j++){
			dfs(i,j,arr[i][j],1);
		}
	}
	cout << st.size();
}
