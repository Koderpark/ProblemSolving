#include <bits/stdc++.h>
#define x first
#define y second
using namespace std;

int dx[] = {0,-1,-1,0,1,1,1,0,-1};
int dy[] = {0,0,-1,-1,-1,0,1,1,1};

int sx[] = {1,1,-1,-1};
int sy[] = {1,-1,1,-1};

int N,M;

int A[100][100] = {0};
bool chk[100][100];

vector<pair<int,int>> cloud;

int idx(int k){
	return (k+N*100)%N;
}

int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			cin >> A[i][j];
		}
	}
	
	cloud.push_back({N-1,0});
	cloud.push_back({N-1,1});
	cloud.push_back({N-2,0});
	cloud.push_back({N-2,1});
	
	int d,s;
	while(M--){
		memset(chk, 0, sizeof(chk));
		
		cin >> d >> s;
		for(int i=0; i<cloud.size(); i++){
			cloud[i].x = idx(cloud[i].x + dy[d] * s);
			cloud[i].y = idx(cloud[i].y + dx[d] * s);
			//printf("[%d %d]\n", cloud[i].x, cloud[i].y);
		}
		
		for(auto pos : cloud){
			chk[pos.x][pos.y] = true;
			A[pos.x][pos.y]++;
		}
		
		cloud.clear();
		
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(chk[i][j]){
					int tmp = 0;
					for(int k=0; k<4; k++){
						int nx = i + sx[k];
						int ny = j + sy[k];
				
						if(-1==nx||-1==ny||N==nx||N==ny) continue;
						if(A[nx][ny] != 0) tmp++;
					}
					A[i][j] += tmp;
				}
			}
		}
		
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				if(!chk[i][j] && A[i][j] >= 2){
					cloud.push_back({i,j});
					A[i][j] -= 2;
				}
			}
		}
		
		/*for(int i=0; i<N; i++,puts("")){
			for(int j=0; j<N; j++){
				bool tmp = false;
				for(auto k : cloud) if(k.x == i && k.y == j) tmp = true;
				printf("%c%d ", (tmp?'*':' ') ,A[i][j]);
			}
		}
		puts("");
		puts("");*/
		
	}
	
	int ans = 0;
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			ans += A[i][j];
		}
	}
	cout << ans;
	return 0;
}
