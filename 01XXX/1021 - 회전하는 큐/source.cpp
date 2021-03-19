#include <stdio.h>
#include <deque>

using namespace std;

deque<int> dq;

int n,m;
int idx;
int cnt;
int ans=1234567890;
int find;

int main(){
	scanf("%d %d", &n, &m);
	for(int i=1; i<=n; i++) dq.push_back(i);
	while(m--){
		scanf("%d", &find);
		for(int i=0; i<dq.size(); i++) if(dq[i] == find) idx = i;
		if(idx <= dq.size()-idx){
			while(dq.front() != find){ cnt++; dq.push_back(dq.front()); dq.pop_front(); }
			dq.pop_front();
		}
		else{
			while(dq.front() != find){ cnt++; dq.push_front(dq.back()); dq.pop_back(); }
			dq.pop_front();
		}
	}
	printf("%d", cnt);
}
