#include <stdio.h>

int f(int k){
	int cnt=0, a=0, b=1, tmp;
	do{
		tmp = a;
		a = b;
		b = (tmp + a) % k;
		cnt++;
	}while(!(a==0 && b==1));
	return cnt;
}

int main(){
	int k,n,m;
	scanf("%d", &k);
	for(int i=0; i<k; i++){
		scanf("%d %d", &n, &m);
		printf("%d %d\n", n, f(m));
	}
	return 0;
}
