#include <stdio.h>
#include <vector>

using namespace std;

int n,m;
int arr[10] = {0};

void dfs(int k){
	if(k==m){
		for(int i=0; i<m; i++) printf("%d ", arr[i]);
		puts("");
		return;
	}
	for(int i=1; i<=n; i++){
		arr[k] = i;
		dfs(k+1);
	}
}

int main(){
	scanf("%d %d", &n, &m);
	dfs(0);
	return 0;
}
