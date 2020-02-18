#include <stdio.h>

int main(){
	int res,a,b,c,count[11] = {0};
	scanf("%d %d %d", &a, &b, &c);
	res = a*b*c;
	while(res != 0){
		count[res%10]++;
		res/=10;
	}
	for(int i=0; i<10; i++){
		printf("%d\n", count[i]);
	}
	return 0;
}
