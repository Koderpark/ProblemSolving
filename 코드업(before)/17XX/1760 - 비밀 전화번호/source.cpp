#include <stdio.h>
#include <string.h>

char pass[11] = {0};
char text1[10] = {0};
char text2[10] = {0};
char text3[10] = {0};

int main(){
	scanf("%s", &pass);
	scanf("%s %s %s", &text1, &text2, &text3);
	for(int i=0; i<sizeof(text1); i++){
		for(int j=0; j<10; j++){
			if(pass[j] == text1[i]) printf("%d", j);
		}
	}
	printf(" ");
	for(int i=0; i<sizeof(text2); i++){
		for(int j=0; j<10; j++){
			if(pass[j] == text2[i]) printf("%d", j);
		}
	}
	printf(" ");
	for(int i=0; i<sizeof(text3); i++){
		for(int j=0; j<10; j++){
			if(pass[j] == text3[i]) printf("%d", j);
		}
	}
}
