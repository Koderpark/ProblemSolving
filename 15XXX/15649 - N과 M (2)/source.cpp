#include <stdio.h>
#include <vector>

using namespace std;

int n,m;
int arr[10] = {0};
int visit[10] = {0};

void dfs(int k,int min){
	if(k==m){
		for(int i=0; i<m; i++) printf("%d ", arr[i]);
		puts("");
		return;
	}
	for(int i=min; i<=n; i++){
		if(!visit[i]){
			visit[i] = 1;
			arr[k] = i;
			dfs(k+1,i);
			visit[i] = 0;
		}
	}
}

int main(){
	scanf("%d %d", &n, &m);
	dfs(0,1);
	return 0;
}
