#include <stdio.h>

int main(){
	int x,tmp,cnt=0;
	scanf("%d", &x);
	for(int i=0; i<5; i++){
		scanf("%d", &tmp);
		if(tmp == x) cnt++;
	}
	printf("%d", cnt);
	return 0;
}

