#include <stdio.h>

bool chk[110][110] = {0};

int main(){
	int k,a,b;
	int sum=0;
	
	scanf("%d", &k);
	while(k--){
		scanf("%d %d", &a, &b);
		for(int i=a; i<a+10; i++) for(int j=b; j<b+10; j++) chk[i][j] = true;
	}
	for(int i=0; i<110; i++) for(int j=0; j<110; j++) sum+=chk[i][j];
	printf("%d", sum);
	return 0;
}
