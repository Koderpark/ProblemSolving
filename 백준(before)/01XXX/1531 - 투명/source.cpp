#include <bits/stdc++.h>
using namespace std;

int arr[123][123] = {0};

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N,M;
	cin >> N >> M;
	for(int i=0; i<N; i++){
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		for(int i=a; i<=c; i++){
			for(int j=b; j<=d; j++){
				arr[i][j]++;
			}
		}
	}
	
	int ans = 0;
	for(int i=1; i<=100; i++){
		for(int j=1; j<=100; j++){
			if(arr[i][j] > M){
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}
