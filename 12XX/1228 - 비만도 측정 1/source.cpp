#include <stdio.h>

int main(){
	double height, kg, fat;
	scanf("%lf %lf", &height, &kg);
	fat = (kg-((height-100)*0.9))*100/((height-100)*0.9);
	printf("%s", fat>20?"비만":fat<=10?"정상":"과체중");
	return 0;
}
