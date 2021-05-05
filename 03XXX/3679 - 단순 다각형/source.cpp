#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

struct pll{
	ll x, y;
	int idx;
};

int n;
vector<pll> pos;

bool cmp(pll a, pll b){
    if(a.y*b.x != a.x*b.y) return a.y*b.x < a.x*b.y;
    if(a.x != b.x) return a.x < b.x;
    return a.y < b.y;
}

bool cmp1(pll a, pll b){
	if(a.x != b.x) return a.x < b.x;
	return a.y < b.y;
}

int main(){
	int c;
	scanf("%d", &c);
	while(c--){
		scanf("%d", &n);
		pos.resize(n);
		
		for(int i=0; i<n; i++){
			scanf("%lld %lld", &pos[i].x, &pos[i].y);
			pos[i].idx = i;
		}
		sort(pos.begin(), pos.end(), cmp1);
		for(int i=1; i<n; i++){
			pos[i].x -= pos[0].x;
			pos[i].y -= pos[0].y;
		}
		pos[0].x = pos[0].y = 0;
		sort(pos.begin()+1, pos.end(), cmp);
		
		for(int i= n-1; i>1; i--){
			if(pos[i].x * pos[i-1].y != pos[i-1].x * pos[i].y){
				reverse(pos.begin()+i, pos.end());
				break;
			}
		}
		
		for(int i=0; i<n; i++){ printf("%d ", pos[i].idx); }
		puts("");
	}
    return 0;
}
