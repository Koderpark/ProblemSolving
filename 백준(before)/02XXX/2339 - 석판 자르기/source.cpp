#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int arr[23][23] = {0};

int recur(int x1, int y1, int x2, int y2, bool dir){
	
	//printf("[%d %d] to [%d %d]\n", x1,y1,x2,y2);
	
	int jewel = 0;
	int trash = 0;
	int ret = 0;
	
	vector<pair<int,int>> pos;
	
	for(int i=x1; i<=x2; i++){
		for(int j=y1; j<=y2; j++){
			if(arr[i][j] == 1){
				trash++;
				pos.push_back({i,j});
			}
			if(arr[i][j] == 2){
				jewel++;
			}
		}
	}
	
	if(trash == 0){
		if(jewel == 1) return 1;
		else           return 0;
	}
	
	for(auto k : pos){
		bool flag = true;
		if(dir){
			for(int i=y1; i<=y2; i++) if(arr[k.x][i] == 2) flag = false;
			if(flag) ret += recur(x1,y1,k.x-1,y2, !dir) * recur(k.x+1,y1,x2,y2, !dir);
		}
		else{
			for(int i=x1; i<=x2; i++) if(arr[i][k.y] == 2) flag = false;
			if(flag) ret += recur(x1,y1,x2,k.y-1, !dir) * recur(x1,k.y+1,x2,y2, !dir);
		}
	}
	return ret;
}

int main(){
	int n;
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	int ret = recur(0,0,n-1,n-1,0) + recur(0,0,n-1,n-1,1);
	if(ret == 0) cout << -1;
	else		 cout << ret;
	return 0;
}
