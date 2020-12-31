#include <stdio.h>
#include <queue>
#include <string.h>
#include <utility>

using namespace std;

queue<pair<int,int>> q;
int n,k;
int sec=1;
int visit[123456] = {0};

bool border(int pos){
	if(0 <= pos && pos <= 100000) return true;
	else return false;
}

int bfs(){
	while(!q.empty()){
		int fir = q.front().first;
		int sec = q.front().second;
		q.pop();
		
		if(fir == k) return sec;
		
		visit[fir] = 1;		
		if(border(fir+1) && visit[fir+1] != 1) q.push({fir+1, sec+1});
		if(border(fir-1) && visit[fir-1] != 1) q.push({fir-1, sec+1});
		if(border(fir*2) && visit[fir*2] != 1) q.push({fir*2, sec+1});
	}
}

int main(){
	scanf("%d %d", &n, &k);
	q.push({n,0});
	printf("%d", bfs());
	return 0;
}
