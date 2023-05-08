#include <stdio.h>

int main(){
	double height, kg, fat, a;
	scanf("%lf %lf", &height, &kg);
	if(height >= 160) 	  a = (height-100)*0.9;
	else if(height < 150) a = (height-100);
	else				  a = (height-150)/2+50;
	
	fat = ((kg-a)*100/a);
	printf("%s", fat>20?"비만":fat<=10?"정상":"과체중");
	return 0;
}
