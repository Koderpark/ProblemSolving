#include <bits/stdc++.h>
#define INF 1234567890

#define nd second
#define st first

#define bg begin
#define ed end

using namespace std;
typedef long long int ll;

vector<pair<ll,ll>> x;
vector<ll> y;
vector<ll> prefix;

int n,m;
int a,b;
int tmp;
int val;

ll idxf;
ll idxe;
ll idx;

ll ans;

int main(){
	
	int maxv = -INF;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &tmp, &val);
		x.push_back({tmp,val});
	}
	
	scanf("%d", &m);
	for(int i=0; i<m; i++){
		scanf("%d %d", &tmp, &val);
		y.push_back(tmp);
		if(!i) prefix.push_back(val);
		else   prefix.push_back(val+prefix[i-1]);
	}
	
	//printf("[ "); for(int i=0; i<prefix.size(); i++) printf("%lld ", prefix[i]); puts("]");
	
	scanf("%d %d", &a, &b);
	for(int i=0; i<x.size(); i++){
		idx = x[i].st;
		
		idxf = lower_bound(y.bg(), y.ed(), idx+a) - y.bg();
		idxe = lower_bound(y.bg(), y.ed(), idx+b) - y.bg();
		
		if(idxe == y.size() || y[idxe] > idx+b) idxe--;
		if(idxe < idxf) continue;
		
		if(idxf == 0) ans += x[i].nd *  prefix[idxe];
		else          ans += x[i].nd * (prefix[idxe] - prefix[idxf-1]);
		
		//printf("%lld * \n", ans);
	}
	printf("%lld", ans);
	return 0;
}
