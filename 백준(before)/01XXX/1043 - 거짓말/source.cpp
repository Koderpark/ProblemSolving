#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int parent[56] = {0};
int arr[56] = {0};
int tmp[56] = {0};
bool flag;

vector<int> v[56];

int find(int k){
	if(parent[k] == k) return k;
	return parent[k] = find(parent[k]);
}

void unionf(int x, int y){
	x = find(x);
	y = find(y);
	parent[x] = y;
	return;
}

int main(){
	scanf("%d %d", &n, &m);
	scanf("%d", &k);
	for(int i=0; i<k;  i++) scanf("%d", &arr[i]);
	for(int i=0; i<56; i++) parent[i] = i;
	
	
	for(int i=0; i<m; i++){
		int a;
		scanf("%d", &a);
		for(int j=0; j<a; j++){
			scanf("%d", &tmp[j]);
			if(j>=1){ unionf(tmp[j], tmp[j-1]); }
			v[i].push_back(tmp[j]);
		}
	}
	
	//puts("------------------");
	//for(int i=0; i<m; i++,puts("")){
	//	for(int j=0; j<v[i].size(); j++) printf("%d ", v[i][j]);
	//}
	//puts("------------------");
	
	
	int ans = m;
	//for(int i=0; i<=m; i++)
	for(int a=0; a<m; a++){
		flag = false;
		for(int b=0; b<v[a].size(); b++){
			for(int c=0; c<k; c++){
				if(find(v[a][b]) == find(arr[c])) flag = true;
			}
		}
		if(flag) ans--;
	}
	printf("%d", ans);
	return 0;
}
