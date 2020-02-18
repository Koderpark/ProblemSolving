#include <stdio.h>

int main(){
	int n,a,b,cnt=0;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		if(a == 1) continue;
		b=1;
		for(int i=2; i<a; i++){
			if(a%i == 0) b=0;
		}
		if(b)cnt++;
	}
	printf("%d", cnt);
	return 0;
}
