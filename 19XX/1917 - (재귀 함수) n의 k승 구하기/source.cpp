#include <bits/stdc++.h>
using namespace std;

long long int f(int n, int k){
	if(k==1) return n;
	if(k==0) return 1;
	if(k% 2) return n*f(n,k-1);
	
	long long int tmp = f(n,k/2);
	return tmp*tmp;
}

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	printf("%lld", f(n,k));
	return 0;
}
