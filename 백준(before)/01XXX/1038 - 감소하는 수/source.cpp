#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> v;

void make(ll now, int k){
	v.push_back(now);
	for(int i=k-1; i>=0; i--){ make(now*10+i, i); }
	return;
}

int main(){
	for(int i=0; i<10; i++) make(i,i);
	sort(v.begin(), v.end());
	
	int n;
	scanf("%d", &n);
	printf("%lld", v.size()>n ? v[n] : -1);
	return 0;
}
