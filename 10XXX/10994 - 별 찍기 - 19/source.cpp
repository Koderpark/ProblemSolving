#include <stdio.h>

int arr[400][400] = {0};

void draw(int pos, int len){
	for(int x=pos; x<pos+len; x++){
		arr[x][pos] = 1;
		arr[pos][x] = 1;
	}
	for(int x=pos; x<pos+len; x++){
		arr[x][pos+len-1] = 1;
		arr[pos+len-1][x] = 1;
	}
}

int main(){
	int n;
	scanf("%d", &n);

	for(int i=1; i<=n; i++) draw(1+2*(i-1), 1+4*(n-i));
	
	for(int i=1; i<=1+4*(n-1); i++,puts("")){
		for(int j=1; j<=1+4*(n-1); j++){
			printf("%c", arr[i][j]?'*':' ');
		}
	}
	return 0;
}
