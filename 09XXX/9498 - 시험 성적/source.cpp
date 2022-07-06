#include <stdio.h>

int main(){
	int score;
	char grade;
	scanf("%d", &score);
	grade = 'A';
	if(score < 90) grade = 'B';
	if(score < 80) grade = 'C';
	if(score < 70) grade = 'D';
	if(score < 60) grade = 'F';
	printf("%c", grade);
	return 0;
}
