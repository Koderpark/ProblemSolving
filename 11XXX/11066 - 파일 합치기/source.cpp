#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> a;
vector<int> b;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		a.clear();
		b.clear();
		
		int ans = 0;
		int n,m;
		scanf("%d", &n);
		for(int i=0; i<n; i++){
			scanf("%d", &m);
			a.push_back(m);
		}
		
		while(a.size() != 1){
			//for(int i=0; i<a.size(); i++) printf("%d ", a[i]);
			//puts("");
			
			sort(a.begin(), a.end());
			
			ans += a[0]+a[1];
			b.push_back(a[0]+a[1]);
			for(int i=2; i<a.size(); i++) b.push_back(a[i]);
			
			a.clear();
			a.assign(b.begin(), b.end());
			b.clear();
		}
		printf("%lld\n", ans);
	}
}
