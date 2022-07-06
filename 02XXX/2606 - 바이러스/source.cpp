#include <stdio.h>
#include <vector>

using namespace std;

vector<int> arr[101];
int visit[101] = {0};

void search(int node){
	for(int i=0; i<arr[node].size(); i++){
		if(visit[arr[node][i]] == 0){
			visit[arr[node][i]] = 1;
			search(arr[node][i]);
		}
	}
}

int main(){
	int n,k;
	int a,b;
	int sum=0;
	scanf("%d", &n);
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		scanf("%d %d", &a, &b);
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	
	search(1);
	
	for(int i=0; i<=100; i++) sum+=visit[i];
	printf("%d", sum-1);
	return 0;
}
