#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
int arr[10] = {0};
int input[10] = {0};
int visit[10] = {0};

void dfs(int k,int min){
	if(k==m){
		for(int i=0; i<m; i++) printf("%d ", input[arr[i]]);
		puts("");
		return;
	}
	for(int i=0; i<n; i++){
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
	for(int i=0; i<n; i++) scanf("%d", &input[i]);
	sort(input, input+n);
	dfs(0,0);
	return 0;
}
