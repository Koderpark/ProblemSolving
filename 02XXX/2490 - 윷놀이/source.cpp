#include <stdio.h>

int main(){
	int a,sum;
	for(int i=0; i<3; i++){
		sum=0;
		for(int j=0; j<4; j++){
			scanf("%d",&a);
			sum+=a;
		}
		switch(sum){
			case 4:{
				puts("E");
				break;
			}
			case 0:{
				puts("D");
				break;
			}
			case 1:{
				puts("C");
				break;
			}
			case 2:{
				puts("B");
				break;
			}
			case 3:{
				puts("A");
				break;
			}
		}
	}
	return 0;
}
