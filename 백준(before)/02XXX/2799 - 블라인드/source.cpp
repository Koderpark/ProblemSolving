#include <bits/stdc++.h>
using namespace std;

string window[1234];
int ans[10] = {0};

int main(){
	int R,C;
	cin >> R >> C;
	for(int i=0; i<5*R+1; i++) cin >> window[i];
	
	for(int i=0; i<R; i++){
		for(int j=0; j<C; j++){
			int cnt = 0;
			for(int k=0; k<4; k++){
				int y = 5*i+1+k;
				int x = 5*j+1;
				
				if(window[y][x] == '*') cnt++;
			}
			ans[cnt]++;
		}
	}
	
	for(int i=0; i<5; i++) cout << ans[i] << " ";
	return 0;
}
