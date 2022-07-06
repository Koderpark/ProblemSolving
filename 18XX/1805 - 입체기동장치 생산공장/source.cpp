#include <stdio.h>

struct factory {
	int num;
	int gas;
};

struct factory fc[101];

int main(){
	int n;
	int tmp;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d %d", &fc[i].num, &fc[i].gas);
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(fc[i].num < fc[j].num){
				fc[101] = fc[i];
				fc[i] = fc[j];
				fc[j] = fc[101];
			}
		}
	}
	
	for(int i=0; i<n; i++){
		printf("%d %d\n", fc[i].num, fc[i].gas);
	}
	return 0;
}
