#include <stdio.h>

int chk[1001] = {0};
int n,p,cnt;

void f(int k){
	if(chk[k] == 2) return;
	chk[k]++;
	f(k*n % p);
	return;
}

int main(){
	scanf("%d %d", &n, &p);
	f(n);
	for(int i=0; i<p; i++){
		if(chk[i]==2) cnt++;
	}
	printf("%d", cnt);
	return 0;
}
