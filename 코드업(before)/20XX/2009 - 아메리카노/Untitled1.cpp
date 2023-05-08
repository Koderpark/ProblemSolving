#include <bits/stdc++.h>
using namespace std;

int main(){
	int k, n;
	int tmp;
	int ans = 0;
	scanf("%d %d", &k, &n);
	
	while(1){
		tmp = (k%n) + (k/n);
		ans += (k/n);
		if(tmp == k) break;
		k = tmp;
	}
	
	printf("%d", k);
	return 0;
}
