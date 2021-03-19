#include <stdio.h>

int main(){
	char num[3] = {0};
	int sum=0;
	scanf("%s", &num);
	if(num[0] == '3' || num[0] == '6' || num[0] == '9') sum++;
	if(num[1] == '3' || num[1] == '6' || num[1] == '9') sum++;
	if(num[2] == '3' || num[2] == '6' || num[2] == '9') sum++;
	if(sum==0) printf("%s", num);
	if(sum==1) printf("K");
	if(sum==2) printf("KK");
	if(sum==3) printf("KKK");
	return 0;
}
