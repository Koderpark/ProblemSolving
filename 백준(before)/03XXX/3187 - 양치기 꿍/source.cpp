#include <bits/stdc++.h>
using namespace std;

bool vis[256][256] = {0};

int R,C;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

string arr[256];

pair<int,int> count(int x, int y){ // ´Á´ë,¾ç 
	pair<int,int> ans = {0,0};
	pair<int,int> tmp = {0,0};
	
	vis[x][y] = true;
	if(arr[x][y] == 'v') ans.first++;
	if(arr[x][y] == 'k') ans.second++;
	
	for(int i=0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		
		if(0>nx || 0>ny || R<=nx || C<=ny) continue;
		
		if(!vis[nx][ny] && arr[nx][ny] != '#'){
			tmp = count(nx,ny);
			ans.first += tmp.first;
			ans.second += tmp.second;
		}
	}
	return ans;
}

int main(){
	cin >> R >> C;
	for(int i=0; i<R; i++){
		cin >> arr[i];
	}
	
	int wolf = 0;
	int sheep = 0;
	pair<int,int> tmp;
	
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			if(!vis[i][j] && arr[i][j] != '#'){
				tmp = count(i,j);
				if(tmp.first < tmp.second){
					sheep+=tmp.second;
				}else{
					wolf+=tmp.first;
				}
			}
		}
	}
	
	cout << sheep << " " << wolf;
	return 0;
}
