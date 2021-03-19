#include <bits/stdc++.h>

#define qx q.front().first.first
#define qy q.front().first.second
#define qz q.front().second

using namespace std;

int m,n,h;
int arr[123][123][123];
 
int dx[6] = { 1,-1, 0, 0, 0, 0 };
int dy[6] = { 0, 0, 1,-1, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1,-1 };

queue <pair<pair<int,int>,int>> q;
 
bool chk(){
    for(int k=0; k<h; k++) for(int i=0; i<n; i++) for(int j=0; j<m; j++){
        if(arr[i][j][k] == 0) return 0;
    }
    return 1;
}

void BFS(){
    while(!q.empty()){
        int x = qx, y = qy, z = qz;
        q.pop();
            
        for(int j=0; j<6; j++){
            int nx = x + dx[j];
            int ny = y + dy[j];
            int nz = z + dz[j];
            
            if(nx>=0 && ny>=0 && nz>= 0 && nx<n && ny<m && nz<h){
                if(!arr[nx][ny][nz]){
                    arr[nx][ny][nz] = arr[x][y][z]+1;
                    q.push({{nx,ny},nz});
                }
            }
        }
    }
}

int main(){
    bool tmp = 1;
    scanf("%d %d %d", &m, &n, &h);
    for(int k=0; k<h; k++) for(int i=0; i<n; i++) for(int j=0; j<m; j++){
        scanf("%d", &arr[i][j][k]);
        if (arr[i][j][k] == 0) tmp = 0;
        if (arr[i][j][k] == 1) q.push({{i,j},k});
    }
    if(tmp){ printf("0"); return 0; }
    
    BFS();
    
    int maxV = 0;
    for(int k=0; k<h; k++) for(int i=0; i<n; i++) for(int j=0; j<m; j++){
    	maxV = max(maxV, arr[i][j][k]);
    	if(arr[i][j][k] == 0){ printf("-1"); return 0; }
    }
    printf("%d", maxV-1);
    return 0;
}
