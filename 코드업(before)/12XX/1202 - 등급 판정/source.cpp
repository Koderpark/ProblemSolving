#include <stdio.h>

int main(){
	int n;
	char grade;
	
	scanf("%d", &n);
	
	if(n <  60) grade='F';
	if(n >= 60) grade='D';
	if(n >= 70) grade='C';
	if(n >= 80) grade='B';
	if(n >= 90) grade='A';
	
	printf("%c", grade);
	return 0;
}
