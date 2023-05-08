#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int m,n,x,y;
		scanf("%d %d %d %d", &m, &n, &x, &y);
		x--;
		y--;
		for(int i=x; i<=m*n; i+=m){ // x%m = (x+m)%m
			if(i%n == y){
				printf("%d\n", i+1);
				goto end;
			}
		}
		printf("-1\n");
		end:;
	}
	return 0;
}
