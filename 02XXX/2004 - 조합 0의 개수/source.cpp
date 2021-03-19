#include <bits/stdc++.h>
using namespace std;

int count(int k){
	int cnt=0;
	while(k%5 == 0){
		k/=5;
		cnt++;
	}
	return cnt;
}

int main(){
	int n,m;
	int ans = 0;
	int bns = 0;
	scanf("%d %d", &n, &m);
	
	while(m!=0){
		ans += count(n-m+1);
		bns += count(m);
		m--;
	}
	printf("%d", ans-bns);
	return 0;
}
