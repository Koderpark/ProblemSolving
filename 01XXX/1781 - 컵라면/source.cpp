#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct problem{
	int num;
	int dead;
	int ramen;
};

struct cmp{
	bool operator()(problem a, problem b){
		if(a.dead != b.dead) return a.dead > b.dead;
		return a.ramen < b.ramen;
	}
};

priority_queue<problem, vector<problem>, cmp> pq;

int main(){
	int n;
	int a,b;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d %d", &a, &b);
		pq.push({i,a,b});
	}
	
	
	int time = 0;
	ll ans = 0;
	while(pq.size() != ){
		problem tmp = pq.top();
		pq.pop();
		int num = tmp.num;
		int dead = tmp.dead;
		int ramen = tmp.ramen;
		
		
		if(time < dead){
			//printf("[%d]", num);
			time++;
			ans += ramen;
		}
	}
	
	printf("%lld", ans);
	return 0;
}
