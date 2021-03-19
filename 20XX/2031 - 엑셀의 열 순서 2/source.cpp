#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
	char input[7] = {0};
	long long int sum=1;
	scanf("%s", &input);
	for(int i=strlen(input)-1; i>=0; i--){
		sum*=(input[i]-64)*pow(26.0,(double)i);
		printf("%c %d %lld %d\n", input[i],(input[i]-64), sum, pow(26.0,(double)i+1));
	}
	printf("%lld", sum);
	return 0;
}
