#include <stdio.h>
#include <math.h>

int board[20] = {0};
int n;
int ans = 0;

bool chk(int k){
	for(int i=0; i<k; i++) if(board[k]==board[i] || abs(board[i]-board[k])==k-i) return false;
	return true;
}

void func(int k){
	if(k==n){ ans++; return; }
	for(int i=0; i<n; i++){
		board[k] = i;
		if(chk(k)) func(k+1);
	}
}

int main(){
	scanf("%d", &n);
	func(0);
	printf("%d", ans);
	return 0;
}
