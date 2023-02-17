#include <bits/stdc++.h>
using namespace std;

int N,M;

bool chk[34] = {0};

int fav[34][34] = {0};
int maxfav[34] = {0};

int main(){
	chk[0] = chk[1] = chk[2] = 1;
	cin >> N >> M;
	
	for(int i=1; i<=N; i++){
		for(int j=0; j<M; j++){
			cin >> fav[i][j];
		}
	}
	
	int ans = -1;
	
	do{
		memset(maxfav, -1, sizeof(maxfav));
		for(int j=0; j<M; j++){
			if(chk[j]){
				for(int i=1; i<=N; i++){
					maxfav[i] = max(maxfav[i], fav[i][j]);
				}
			}
		}
		int sum = 0;
		for(int i=1; i<=N; i++) sum += maxfav[i];
		
		ans = max(ans, sum);
	}while(prev_permutation(chk, chk+M));
	
	cout << ans;
	return 0;
}
