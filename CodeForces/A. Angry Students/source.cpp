#include <stdio.h>
int main(){
	int t,k,l,sum,max;
	char arr[101] = {0};
	
	scanf("%d", &t);
	for(int i=0; i<t; i++,max=0){
		scanf("%d", &k);
		scanf("%s", arr);
		for(int j=0; j<k; j++){
			l=j+1;
			sum=0;
			if(arr[j] == 'A'){
				while(arr[l++] == 'P') sum++;
			}
			if(max < sum) max=sum;
		}	
		printf("%d\n", max);
	}
	return 0;
}
