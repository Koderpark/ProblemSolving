#include <bits/stdc++.h>
using namespace std;

int arr[123][123] = {0};
int vis[123][123] = {0};

int dx[] = {0,1,0,-1,1,1,-1,-1};
int dy[] = {1,0,-1,0,1,-1,1,-1};

void paper(int x, int y){
	for(int i=x; i<x+10; i++){
		for(int j=y; j<y+10; j++){
			arr[i][j] = 1;
		}
	}
	return;
}

int main(){
	int N,a,b;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> a >> b;
		paper(a,b);
	}
	
	int ans = 0;
	for(int i=1; i<=100; i++){
		for(int j=1; j<=100; j++){
			if(arr[i][j]){
				bool flag = true;
				
				for(int k=0; k<4; k++){
					int nx = i+dx[k];
					int ny = j+dy[k];
					if(arr[nx][ny] == 0) ans++;
				}
			}
		}
	}
	cout << ans;
	return 0;
}
