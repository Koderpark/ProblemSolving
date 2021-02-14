#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

struct people{
	int time; // 계산시간
	int num;  // 회원번호
	int cash; // 계산대번호 
};

struct cmp_pq{
	bool operator()(people a, people b){
		if(a.time == b.time) return a.cash>b.cash;
		else                 return a.time>b.time;
	}
};

bool cmp_v(people a, people b){
	if(a.time == b.time) return a.cash>b.cash;
	else                 return a.time<b.time;
}

ll ans;
priority_queue<people, vector<people>, cmp_pq> pq;
vector<people> v;

int main(){
	int n,k;
	int a,b;
	people tmp;
	scanf("%d %d", &n, &k);
	
	int ptr = 0;
	for(ptr; ptr<min(n,k); ptr++){
		scanf("%d %d", &a, &b);
		pq.push({b,a,ptr});
	}
	for(ptr; ptr<n; ptr++){
		tmp = pq.top();
		v.push_back(tmp);
		pq.pop();
		scanf("%d %d", &a, &b);
		pq.push({tmp.time+b, a, tmp.cash});
	}
	
	while(!pq.empty()){ v.push_back(pq.top()); pq.pop(); }
	sort(v.begin(), v.end(), cmp_v);
	for(int i=0; i<v.size(); i++){ ans += (ll)v[i].num * (i+1); }
	
	printf("%lld", ans);
	return 0;
}
