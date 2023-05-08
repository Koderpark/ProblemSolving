#include <stdio.h>
#include <string.h>

char input[101] = {0};

int f(int time, int arr[], int index){
	int sum = 0;
	if(time == 13) return 0;
	char tmp[101] = {0};
	for(int i=0; i<13; i++){
		for(int j=0; j<arr[i]; j++) strcat(tmp, "w");
		for(int j=0; j<arr[i]; j++) strcat(tmp, "o");
		for(int j=0; j<arr[i]; j++) strcat(tmp, "l");
		for(int j=0; j<arr[i]; j++) strcat(tmp, "f");
	}
	if(strcmp(input, tmp) == 0) return 1;
	else{
		arr[index]++;    sum += f(time+1, arr, index);    arr[index]--;
		arr[index+1]++;  sum += f(time+1, arr, index+1);  arr[index+1]--;
	}
	return sum;
}

int main(){
	int tmp[] = {1,0,0,0,0,0,0,0,0,0,0,0,0};
	scanf("%s", input);
	printf("%d", f(1, tmp, 0));
	return 0;
} 
