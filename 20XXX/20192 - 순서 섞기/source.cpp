#include <bits/stdc++.h>

using namespace std;

int in[345678] = {0};

int main(){
	int n;
	scanf("%d", &n);
	
	int cnt = 1;
	int updown=1; // 1 => up, 0 => down
	
	for(int i=1; i<=n; i++){ scanf("%d", &in[i]); }
	for(int i=2; i<=n; i++){
		if(updown==1){ if(in[i-1] > in[i]) { updown = 0; cnt++; } }
		else         { if(in[i-1] < in[i]) { updown = 1; cnt++; } }
	}
	//printf("[%d]", cnt);
	printf("%d", (int)ceil(log2(cnt)));
	return 0;
} 
