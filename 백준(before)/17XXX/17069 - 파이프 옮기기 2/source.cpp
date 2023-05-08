#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll dpx[50][50] = {0};
ll dpy[50][50] = {0};
ll dpxy[50][50] = {0};

int m[50][50] = {0};

int main(){
	int n;
	cin >> n;
	for(int i=1; i<=n; i++){ for(int j=1; j<=n; j++) cin >> m[i][j]; }
	
	dpx[1][2] = 1;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			if(!m[i][j] && !m[i][j-1]){
				dpx[i][j] += dpx[i][j-1];
				dpx[i][j] += dpxy[i][j-1];
			}
			if(!m[i][j] && !m[i-1][j] && !m[i][j-1] && !m[i-1][j-1]){
				dpxy[i][j] += dpx[i-1][j-1];
				dpxy[i][j] += dpy[i-1][j-1];
				dpxy[i][j] += dpxy[i-1][j-1];
			}
			if(!m[i][j] && !m[i-1][j]){
				dpy[i][j] += dpy[i-1][j];
				dpy[i][j] += dpxy[i-1][j];
			}
		}
	}
	/*
	for(int i=1; i<=n; i++,puts("")){
		for(int j=1; j<=n; j++) printf("%d ", dpx[i][j]);
	}
	puts("");
	
	
	for(int i=1; i<=n; i++,puts("")){
		for(int j=1; j<=n; j++) printf("%d ", dpy[i][j]);
	}
	
	puts("");
	
	
	for(int i=1; i<=n; i++,puts("")){
		for(int j=1; j<=n; j++) printf("%d ", dpxy[i][j]);
	}
	*/
	cout << dpx[n][n] + dpy[n][n] + dpxy[n][n];
	return 0;
}
