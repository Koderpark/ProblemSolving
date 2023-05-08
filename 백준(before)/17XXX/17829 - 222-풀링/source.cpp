#include <bits/stdc++.h>
using namespace std;

int N;
int arr[1234][1234] = {0};

int second(int a, int b, int c, int d){
	int tmp[4];
	tmp[0] = a;
	tmp[1] = b;
	tmp[2] = c;
	tmp[3] = d;
	sort(tmp,tmp+4);
	return tmp[2];
}

int dfs(int sx, int sy, int ex, int ey){
	if(sx+1 == ex && sy+1 == ey){
		return second(
			arr[sx][sy], 
			arr[sx+1][sy], 
			arr[sx][sy+1], 
			arr[sx+1][sy+1]
		);
	}
	else{
		int len = ex-sx;
		len /= 2;
		
		return second(
			dfs(sx,sy,sx+len,sy+len),
			dfs(sx,sy+len+1,sx+len,ey),
			dfs(sx+len+1,sy,ex,sy+len),
			dfs(sx+len+1,sy+len+1,ex,ey)
		);
	}
}

int main(){
	cin >> N;
	for(int i=1; i<=N; i++){
		for(int j=1; j<=N; j++){
			cin >> arr[i][j];
		}
	}
	
	cout << dfs(1,1,N,N);
	return 0;
}
