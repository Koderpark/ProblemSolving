#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int cnt = 0;

int vis[123456] = {0};
int n,k;
queue<pair<int,int>> q;

int arr[3] = {0};

int main(){
	scanf("%d %d", &n, &k);
	
	q.push({n,0});
	
	while(!q.empty()){
		int pos =  q.front().first;
		int time = q.front().second;
		q.pop();
		
		vis[pos] = 1;
		if(cnt!=0 && pos==k && ans==time){ cnt++; }
		if(cnt==0 && pos==k)             { cnt++; ans = time; }
		
		if(pos-1 >= 0      && !vis[pos-1]) q.push({pos-1, time+1});
		if(pos+1 <= 100000 && !vis[pos+1]) q.push({pos+1, time+1});
		if(pos*2 <= 100000 && !vis[pos*2]) q.push({pos*2, time+1});
	}
	
	printf("%d\n%d", ans, cnt);
	return 0;
}
