#include <stdio.h>

long long sum(int *a, int n){
	long long int res;
	for(int i=0; i<n; i++){
		res+=a[i];
	}
	return res;
}
