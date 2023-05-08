#include <stdio.h>

//////// I solved it myself!!! ////////
// 0line - 1
// 1line - 1 1
// 2line - 1 0 1
// 3line - 1 1 1 1
// 4line - 1 0 0 0 1
// 5line - 1 1 0 0 1 1
// 6line - 1 0 1 0 1 0 1
// 7line - 1 1 1 1 1 1 1 1
// 8line - 1 0 0 0 0 0 0 0 1

//2line, 4line, 8line -> kline = 1 + 0 * (k-1) + 1.

int arr[1000000];
int tmp[1000000];

int main(){
	int n,m;
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<n; i++) scanf("%d", &arr[i]);
    for(int i=1; i<=m; i*=2){
    	if(i&m){
            for(int j=0; j<n; j++) tmp[j] = arr[j]^arr[(i+j)%n];
            for(int j=0; j<n; j++) arr[j] = tmp[j];
        }
	}
    for(int i=0; i<n; i++) printf("%d\n", arr[i]);
    return 0;
}
