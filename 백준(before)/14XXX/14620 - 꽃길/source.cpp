#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int cost[12][12] = {0};
int N;

int dx[] = {1,-1,0,0,0};
int dy[] = {0,0,0,1,-1};

int add(int x1,int y1,int x2,int y2,int x3,int y3){
	bool tmp[12][12] = {0};
	int chk = 0;
	int ans = 0;
	
	for(int i=0; i<5; i++){
		int nx = x1+dx[i];
		int ny = y1+dy[i];
		tmp[nx][ny] = 1;
		ans += cost[nx][ny];
	}
	
	for(int i=0; i<5; i++){
		int nx = x2+dx[i];
		int ny = y2+dy[i];
		tmp[nx][ny] = 1;
		ans += cost[nx][ny];
	}
	
	for(int i=0; i<5; i++){
		int nx = x3+dx[i];
		int ny = y3+dy[i];
		tmp[nx][ny] = 1;
		ans += cost[nx][ny];
	}
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			chk += tmp[i][j];
		}
	}
	
	if(chk != 15) return -1;
	return ans;
}

int main(){
	cin >> N;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin >> cost[i][j];
		}
	}
	
	int ans = 998244353;
	
	for(int x1=2; x1<N; x1++){
		for(int y1=2; y1<N; y1++){
			
			for(int x2=2; x2<N; x2++){
				for(int y2=2; y2<N; y2++){
					
					if(x1 == x2 && y1 == y2) continue;
					
					for(int x3=2; x3<N; x3++){
						for(int y3=2; y3<N; y3++){
							
							if(x1 == x3 && y1 == y3) continue;
							if(x2 == x3 && y2 == y3) continue;
							
							int tmp = add(x1,y1,x2,y2,x3,y3);
							if(tmp == -1) continue;
							ans = min(ans, tmp);
						}
					}
				}
			}
		}
	}
	cout << ans;
	return 0;
}
