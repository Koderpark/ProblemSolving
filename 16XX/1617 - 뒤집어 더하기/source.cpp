#include <stdio.h>
#include <math.h>

int pelin(int k){
	int ans=0;
	int n=log10(k);
	for(int i=0; i<n+1; i++){
		ans+=(k%10)*pow(10, n-i);
		k/=10;
	}
	return ans;
}

bool chkpelin(int k){
	int tmp = pelin(k);
	if(k == tmp) return 1;
	else return 0;
}

int main(){
	int n;
	int cnt;
	scanf("%d", &n);
	n += pelin(n);
	printf("%s", chkpelin(n)?"YES":"NO");
	return 0;
}
