#include <bits/stdc++.h>
using namespace std;
int n, m, arr[512][512], ans = -1;

int I_mino_1(int x, int y){ return arr[x][y]   + arr[x+1][y]   + arr[x+2][y]   + arr[x+3][y];   }
int I_mino_2(int x, int y){ return arr[x][y]   + arr[x][y+1]   + arr[x][y+2]   + arr[x][y+3];   }
int O_mino_1(int x, int y){ return arr[x][y]   + arr[x+1][y]   + arr[x][y+1]   + arr[x+1][y+1]; }
int L_mino_1(int x, int y){ return arr[x][y]   + arr[x+1][y]   + arr[x+2][y]   + arr[x+2][y+1]; }
int L_mino_2(int x, int y){ return arr[x][y]   + arr[x][y+1]   + arr[x+1][y+1] + arr[x+2][y+1]; }
int L_mino_3(int x, int y){ return arr[x+2][y] + arr[x][y+1]   + arr[x+1][y+1] + arr[x+2][y+1]; }
int L_mino_4(int x, int y){ return arr[x][y]   + arr[x+1][y]   + arr[x+2][y]   + arr[x][y+1];   }
int L_mino_5(int x, int y){ return arr[x][y]   + arr[x+1][y]   + arr[x+1][y+1] + arr[x+1][y+2]; }
int L_mino_6(int x, int y){ return arr[x][y]   + arr[x][y+1]   + arr[x][y+2]   + arr[x+1][y+2]; }
int L_mino_7(int x, int y){ return arr[x][y]   + arr[x+1][y]   + arr[x][y+1]   + arr[x][y+2];   }
int L_mino_8(int x, int y){ return arr[x+1][y] + arr[x+1][y+1] + arr[x][y+2]   + arr[x+1][y+2]; }
int T_mino_1(int x, int y){ return arr[x][y]   + arr[x+1][y]   + arr[x+2][y]   + arr[x+1][y+1]; }
int T_mino_2(int x, int y){ return arr[x+1][y] + arr[x][y+1]   + arr[x+1][y+1] + arr[x+2][y+1]; }
int T_mino_3(int x, int y){ return arr[x][y]   + arr[x][y+1]   + arr[x+1][y+1] + arr[x][y+2];   }
int T_mino_4(int x, int y){ return arr[x+1][y] + arr[x][y+1]   + arr[x+1][y+1] + arr[x+1][y+2]; }
int S_mino_1(int x, int y){ return arr[x][y]   + arr[x+1][y]   + arr[x+1][y+1] + arr[x+2][y+1]; }
int S_mino_2(int x, int y){ return arr[x+1][y] + arr[x+2][y]   + arr[x][y+1]   + arr[x+1][y+1]; }
int S_mino_3(int x, int y){ return arr[x][y]   + arr[x][y+1]   + arr[x+1][y+1] + arr[x+1][y+2]; }
int S_mino_4(int x, int y){ return arr[x+1][y] + arr[x][y+1]   + arr[x+1][y+1] + arr[x][y+2];   }

int main(){
	memset(arr, -1, sizeof(arr));
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) scanf("%d", &arr[i][j]);
	
	for(int i = 1; i <= n-3; i++){
		for(int j = 1; j <= m; j++){
			ans = max(ans,I_mino_1(i,j));
		}
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m-3; j++){
			ans = max(ans,I_mino_2(i,j));
		}
	}
	
	for(int i = 1; i <= n-1; i++){
		for(int j = 1; j <= m-1; j++){
			ans = max(ans,O_mino_1(i,j));
		}
	}
	
	for(int i = 1; i <= n-2; i++){
		for(int j = 1; j <= m-1; j++){
			ans = max(ans,L_mino_1(i,j));
			ans = max(ans,L_mino_2(i,j));
			ans = max(ans,L_mino_3(i,j));
			ans = max(ans,L_mino_4(i,j));
			ans = max(ans,T_mino_1(i,j));
			ans = max(ans,T_mino_2(i,j));
			ans = max(ans,S_mino_1(i,j));
			ans = max(ans,S_mino_2(i,j));
		}
	}
	
	for(int i = 1; i <= n-1; i++){
		for(int j = 1; j <= m-2; j++){
			ans = max(ans,L_mino_5(i,j));
			ans = max(ans,L_mino_6(i,j));
			ans = max(ans,L_mino_7(i,j));
			ans = max(ans,L_mino_8(i,j));
			ans = max(ans,T_mino_3(i,j));
			ans = max(ans,T_mino_4(i,j));
			ans = max(ans,S_mino_3(i,j));
			ans = max(ans,S_mino_4(i,j));
		}
	}
	
	printf("%d", ans);
	return 0;
}
