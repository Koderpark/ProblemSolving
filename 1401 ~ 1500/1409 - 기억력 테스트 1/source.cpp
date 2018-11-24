#include <stdio.h>

int main(){
	int arr[11];
	int place;
	
	for(int i=0; i<10; i++) scanf("%d", &arr[i]);
	scanf("%d", &place);
	printf("%d", arr[place-1]);
	return 0;
}
