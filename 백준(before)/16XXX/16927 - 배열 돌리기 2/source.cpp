#include <bits/stdc++.h>
#define Ptr (ptr+shift) % L
using namespace std;

int N,M,R;

int arr[345][345] = {0};
int ans[345][345] = {0};

vector<int> donut[200];

void make_donut(int idx){
	int x = idx;
	int y = idx;
	
	for(int i=y; i<M-y+1; i++){
		donut[idx].push_back(arr[x][i]);
	}
	for(int i=x; i<N-x+1; i++){
		donut[idx].push_back(arr[i][M-y+1]);
	}
	for(int i=M-y+1; i>y; i--){
		donut[idx].push_back(arr[N-x+1][i]);
	}
	for(int i=N-x+1; i>x; i--){
		donut[idx].push_back(arr[i][y]);
	}
	return;
}

void fill_donut(int idx, int shift){
	int x = idx;
	int y = idx;
	int ptr = 0;
	int L = donut[idx].size();
	
	for(int i=y; i<M-y+1; i++){
		ans[x][i] = donut[idx][Ptr];
		ptr++;
	}
	for(int i=x; i<N-x+1; i++){
		ans[i][M-y+1] = donut[idx][Ptr];
		ptr++;
	}
	for(int i=M-y+1; i>y; i--){
		ans[N-x+1][i] = donut[idx][Ptr];
		ptr++;
	}
	for(int i=N-x+1; i>x; i--){
		ans[i][y] = donut[idx][Ptr];
		ptr++;
	}
	return;
}


int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M >> R;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> arr[i][j];
		}
	}
	
	int K = min(N/2, M/2);
	
	for(int i=1; i<=K; i++) make_donut(i);
	for(int i=1; i<=K; i++) fill_donut(i, R);
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}
