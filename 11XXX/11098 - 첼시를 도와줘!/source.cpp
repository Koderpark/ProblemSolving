#include <stdio.h>

int main(){
	int n,p;
	int value,maxvalue=0;
	char name[50] = {0};
	char tmp[50] = {0};
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		maxvalue = 0;
		scanf("%d", &p);
		for(int i=0; i<p; i++){
			scanf("%d", &value);
			if(value > maxvalue){
				maxvalue = value;
				scanf("%s", name);
			}
			else{
				scanf("%s", tmp);
			}
		}
		printf("%s\n", name);
	}
	return 0;
}
