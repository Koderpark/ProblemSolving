#include <stdio.h>

int main(){
	int a;
	int sum = 0;
	for(int i=0; i<2; i++){
		scanf("%d", &a);
		switch(a){
			case 1: sum+=400; break;
			case 2: sum+=340; break;
			case 3: sum+=170; break;
			case 4: sum+=100; break;
			default:sum+=70;
		}
	}
	
	printf("%s", sum>500?"angry":"no angry");
	return 0;
}
