#include <stdio.h>
#include <string.h>

int max=0,p=0,length;
char a[1000001] = {0};
int sum[255] = {0};

int main(){
	scanf("%s", a);
	length = strlen(a);
	for(int i=0; i<length; i++){
		if('a'<=a[i]&&a[i]<='z')a[i]-=32;
		sum[a[i]]++;
	}
	for(int i='A'; i<='Z'; i++) if(max < sum[i]) max = sum[i];
	for(int i='A'; i<='Z'; i++){
		if(max == sum[i] && p != 0){
			printf("?");
			return 0;
		}
		if(max == sum[i]) p = i;
	}
	printf("%c", p);
	return 0;
}
