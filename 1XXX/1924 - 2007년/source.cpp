#include <stdio.h>

int main(){
	int m,d;
	scanf("%d %d", &m, &d);
	for(int i=1; i<m; ++i){
		switch(i){
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:{
				d+=31;
				break;
			}
			case 4: case 6: case 9: case 11:{
				d+=30;
				break;
			}
			case 2:{
				d+=28;
				break;
			}
		}
	}
	switch(d%7){
		case 0:{
			printf("SUN");
			break;
		}
		case 1:{
			printf("MON");
			break;
		}
		case 2:{
			printf("TUE");
			break;
		}
		case 3:{
			printf("WED");
			break;
		}
		case 4:{
			printf("THU");
			break;
		}
		case 5:{
			printf("FRI");
			break;
		}
		case 6:{
			printf("SAT");
			break;
		}
	}
}
