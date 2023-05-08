#include <bits/stdc++.h>
using namespace std;

int cnt[123] = {0};

int main(){
	int n,k;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> k;
		cnt[k]++;
	}
	
	for(int i=50; i>=0; i--){
		if(cnt[i] == i){
			printf("%d", i);
			return 0;
		}
	}
	printf("-1");
	return 0;
} 
