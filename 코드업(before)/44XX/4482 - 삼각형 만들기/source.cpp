#include <stdio.h>

int main(){
	int n,sum=0;//주의사항 2 
	scanf("%d", &n);
	
	for(int i=1; i<n; i++){ //  가장 짧은 변 
		for(int j=i; j<n; j++){ // 중간 변 
			int k = n-(i+j); // 가장 긴 변 + 주의사항 1 
			if(k<j ) break;//주의사항 3 
			if(i+j > k) sum++;
		}
	}
	
	printf("%d", sum);
	return 0;
}
