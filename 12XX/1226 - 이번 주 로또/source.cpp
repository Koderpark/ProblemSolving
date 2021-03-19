#include <stdio.h>

int main(){
	int lotto[7] = {0}, have[6] = {0}, count=0, bonus=0;
	for(int i=0; i<7; i++)	scanf("%d", &lotto[i]);
	for(int i=0; i<6; i++)	scanf("%d", &have[i]);
	
	for(int i=0; i<7; i++){
		for(int j=0; j<6; j++){
			if(lotto[i] == have[j] && i != 6) count++;
			else if(lotto[6] == have[j])	  bonus++;
		}
	}
	
	switch(count){
		case 6:{
			printf("1");
			break;
		}
		case 5:{
			if(bonus != 0) printf("2");
			else		   printf("3");
			break;
		}
		case 4:{
			printf("4");
			break;
		}
		case 3:{
			printf("5");
			break;
		}
		default:{
			printf("0");
			break;
		}
	}
	
	return 0;
}
