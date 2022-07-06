#include <stdio.h>

int main(){
	int n;
	int a,b,c;
	int sum = 0;
	int max = 0;
	int arr[3] = {0};
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d %d %d", &a, &b, &c);
		arr[0]+=a*100;
		arr[1]+=b*10;
		arr[2]+=c*1;
	}
	
	for(int i=0; i<3; i++)	if(max < arr[i]) 	max = arr[i];
	for(int i=0; i<3; i++)  if(max == arr[i])	sum++;
	
	if(sum != 1) printf("0 %d", max);
	else  for(int i=0; i<3; i++)  if(max == arr[i]) printf("%d %d", i+1, max/100);
	return 0;
}
