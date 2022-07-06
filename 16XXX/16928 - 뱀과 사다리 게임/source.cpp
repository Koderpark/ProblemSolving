#include <bits/stdc++.h>
#define INF 1234567890
using namespace std;

queue<int> q;

int d[123] = {0};

int mov[123] = {0};

int main(){
	int n,m;
	int a,b;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++){ scanf("%d %d", &a, &b); mov[a] = b; }
	for(int i=0; i<m; i++){ scanf("%d %d", &a, &b); mov[a] = b; }
	
	memset(d, -1, sizeof(d));
	q.push(1);
	d[1] = 0;
	
	while(!q.empty()){
		int tmp = q.front();
		q.pop();
		
		for(int i=1; i<=6; i++){
			int next = tmp+i;
			if(next<=100){
				if(mov[next] != 0) next = mov[next];
				if(d[next] == -1){
					d[next] = d[tmp]+1;
					q.push(next);
				}
			}
		}
	}
	printf("%d", d[100]);
	return 0;
}
