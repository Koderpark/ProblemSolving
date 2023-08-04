#include <bits/stdc++.h>
using namespace std;

int board[20][20] = {0};
int dir = 0;

int o_mok(int x, int y){
	for(int i=1; i<=2; i++){
		if(
			board[x-2][y-2] == i &&
			board[x-1][y-1] == i &&
			board[x+0][y+0] == i &&
			board[x+1][y+1] == i &&
			board[x+2][y+2] == i
		){
			dir = 1; // \ 规氢
			return i; 
		}
		if(
			board[x-2][y+2] == i &&
			board[x-1][y+1] == i &&
			board[x+0][y+0] == i &&
			board[x+1][y-1] == i &&
			board[x+2][y-2] == i
		){
			dir = 2; // / 规氢
			return i; 
		}
		if(
			board[x-2][y] == i &&
			board[x-1][y] == i &&
			board[x+0][y] == i &&
			board[x+1][y] == i &&
			board[x+2][y] == i
		){
			dir = 3; // | 规氢
			return i; 
		}
		if(
			board[x][y+2] == i &&
			board[x][y+1] == i &&
			board[x][y+0] == i &&
			board[x][y-1] == i &&
			board[x][y-2] == i
		){
			dir = 4; // - 规氢
			return i; 
		}
	}
	return 0;
}

int main(){
	for(int i=0; i<19; i++){
		for(int j=0; j<19; j++){
			cin >> board[i][j];
		}
	}
	
	int ans = 0;
	int x,y;
	for(int i=2; i<17; i++){
		for(int j=2; j<17; j++){
			if(ans == 0){
				ans = o_mok(i,j);
				if(ans != 0){
					x = i;
					y = j;
				}
			}
		}
	}
	
	cout << ans << "\n";
	if(ans != 0){
		cout << x << " " << y;
	}
	return 0;
}
