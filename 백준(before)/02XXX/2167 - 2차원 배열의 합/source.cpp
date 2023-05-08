#include <bits/stdc++.h>
using namespace std;

int arr[345][345] = {0};
int prefix[345][345] = {0};

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int N,M;
	cin >> N >> M;
	
	for(int i=1; i<=N; i++){
		for(int j=1; j<=M; j++){
			cin >> arr[i][j];
			prefix[i][j] = arr[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
			
		}
	}
	
	int a,b,c,d;
	int K;
	cin >> K;
	for(int i=0; i<K; i++){
		cin >> a >> b >> c >> d;
		cout << prefix[c][d] - prefix[c][b-1] - prefix[a-1][d] + prefix[a-1][b-1] << "\n";
	}
	
	return 0;
}
