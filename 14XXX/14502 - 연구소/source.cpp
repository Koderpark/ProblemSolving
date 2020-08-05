#include <stdio.h>

int n,m;
int arr[10][10];
int tmp[10][10];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void fill(int x, int y){
	tmp[x][y] = 2;
	for(int i=0; i<4; i++){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(0<=nx && nx<n && 0<=ny && ny<m && tmp[nx][ny] == 0){
			fill(nx,ny);
		}
	}
	return;
}

int f(int x1,int y1,int x2,int y2,int x3,int y3){
	tmp[x1][y1] = tmp[x2][y2] = tmp[x3][y3] = 1;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(tmp[i][j] == 2){
				fill(i,j);
			}
		}
	}
	int cnt=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(tmp[i][j] == 0) cnt++;
		}
	}
	return cnt;
}


int main(){
	int max = -1;
	int sum;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) for(int j=0; j<m; j++) scanf("%d", &arr[i][j]);
	
	for(int x1=0; x1<n; x1++) for(int y1=0; y1<m; y1++){
		if(arr[x1][y1] != 0) continue;
		for(int x2=0; x2<n; x2++) for(int y2=0; y2<m; y2++){
			if(arr[x2][y2] != 0 || (x1==x2&&y1==y2)) continue;
			for(int x3=0; x3<n; x3++) for(int y3=0; y3<m; y3++){
				if(arr[x3][y3] != 0 || (x1==x3&&y1==y3) || (x3==x2&&y3==y2)) continue;
				for(int i=0; i<n; i++) for(int j=0; j<m; j++) tmp[i][j] = arr[i][j];
				sum = f(x1,y1,x2,y2,x3,y3);
				if(max < sum) max = sum;
			}
		}
	}
	printf("%d", max);
	return 0;
}
