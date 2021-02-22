#include <bits/stdc++.h>
using namespace std;

bool chk[12345678] = {0};
vector<int> ans;

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=2; i<=10000000; i++){
		if(!chk[i]){
			ans.push_back(i);
			for(int j=i+i; j<=10000000; j+=i) chk[j] = 1;
		}
	}
	
	printf("%d", ans[n-1]);
	return 0;
}
