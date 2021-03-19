#include <bits/stdc++.h>
using namespace std;

int ans[7];
int arr[25];
int n;
void f(int idx, int time){
	if(time == 7){
		for(int i=1; i<=6; i++) printf("%d ", ans[i]); puts("");
		return;
	}
	
	for(int i=idx; i<=n; i++){
		ans[time] = arr[i];
		f(i+1, time+1);
	}
	return;
}

int main(){
	while(1){
		scanf("%d", &n);
		if(n==0) break;
		
		for(int i=1; i<=n; i++) scanf("%d", &arr[i]);
		f(1,1);
		puts("");
	}
	return 0;
}
