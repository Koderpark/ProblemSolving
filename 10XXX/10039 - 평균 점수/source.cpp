#include <stdio.h>

int main(){
	int sum=0, a;
	for(int i=0; i<5; i++){
		scanf("%d",&a);
		sum+=a<40?40:a;
	}
	printf("%d", sum/5);
	return 0;
}
