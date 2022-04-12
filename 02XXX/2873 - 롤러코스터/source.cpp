#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int  val=0;
int  n,m;
int  arr[1234][1234] = {0};
bool chk[1234][1234] = {0};

vector<pair<int,pair<int,int>>> tmp;

int dx[] = {1, 0,-1, 0};
int dy[] = {0, 1, 0,-1};

int main(){
	cin >> n >> m;
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) cin >> arr[i][j];
	
	for(int i=1; i<=n; i++){ arr[i][0] = -1; arr[i][m+1] = -1; }
	for(int j=1; j<=m; j++){ arr[0][j] = -1; arr[n+1][j] = -1; }
	
	
	val = n*m;
	
	if(n%2==0 && m%2==0){ // 반드시 점 한개는 빼야 뎀. 
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				if(i==1 && j==1) continue;
				if(i==1 && j==m-1) continue;
				if(i==n && j==2) continue;
				if(i==2 && j==m) continue;
				if(i==n-1 && j==1) continue;
				
				tmp.push_back({arr[i][j],{i,j}});
			}
		}
		sort(tmp.begin(), tmp.end());
		arr[tmp[0].y.x][tmp[0].y.y] = -1;
		val--;
	}
	
	
	//for(int i=0; i<=n+1; i++,puts("")){
	//	for(int j=0; j<=m+1; j++) printf("%3d", arr[i][j]);
	//}
	
	
	dfs(1,1);
	while(!s.empty()){
		printf("%c",s.top());s.pop();
	}
	return 0;
}
