#include <stdio.h>
#include <string.h>

int arr[1000001] = {0};

int main(){
	int len=0;
	char input[333334] = {0};
	scanf("%s", input);
	if(strcmp(input, "0") == 0){
		printf("0");
		return 0;
	}
	switch(input[0]){
		case '1':{printf("1");break;}
		case '2':{printf("10");break;}
		case '3':{printf("11");break;}
		case '4':{printf("100");break;}
		case '5':{printf("101");break;}
		case '6':{printf("110");break;}
		case '7':{printf("111");break;}
	}
	len = strlen(input);
	for(int i=1; i<=len; i++){
		switch(input[i]){
			case '0':{printf("000");break;}
			case '1':{printf("001");break;}
			case '2':{printf("010");break;}
			case '3':{printf("011");break;}
			case '4':{printf("100");break;}
			case '5':{printf("101");break;}
			case '6':{printf("110");break;}
			case '7':{printf("111");break;}
		}
	}
	return 0;
}
