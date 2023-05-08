#include <stdio.h>

int main(){
	int n[5];
	int arr[5] = {10000, 1000, 100, 10, 1};
	scanf("%1d%1d%1d%1d%1d", &n[0], &n[1], &n[2], &n[3], &n[4]);
	for(int i=0; i<5; i++) printf("[%d]\n", n[i] * arr[i]);
}
