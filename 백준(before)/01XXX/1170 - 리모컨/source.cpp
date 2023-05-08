#include <bits/stdc++.h>
using namespace std;

int key[12] = {0};

int chk(int k){
	if(k==0){
		if(key[k]) return 0;
		else       return 1;
	}
	int cnt=0;
	while(k){
		if(key[k%10]) return 0;
		cnt++;
		k/=10;
	}
	return cnt;
}

int main(){
	int n,m;
	int tmp;
	scanf("%d %d", &n, &m);
	for(int i=0; i<m; i++){
		scanf("%d", &tmp);
		key[tmp] = 1;
	}
	
	int ans = abs(n-100);
	for(int i=0; i<=1000000; i++){
		int cnt = chk(i);
		if(cnt){
			//printf("[%d] ",i);
			int ret = abs(i-n);
			ans = min(ans, cnt+ret);
		}
	}
	printf("%d", ans);
	return 0;
}
