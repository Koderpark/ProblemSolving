#include <stdio.h>
#include <algorithm>

int main(){
	int odd[11] = {0}, even[11] = {0};
	int a,j=0,k=0;
	for(int i=0; i<10; i++){
		scanf("%d",&a);
		if(a % 2 == 0){
			even[j++] = a;
		}else{
			odd[k++] = a;
		}
	}
	std::sort(even, even+j);
	std::sort(odd, odd+k);
	if(odd[0]) printf("%d ", odd[k-1]);
	if(even[0])printf("%d", even[j-1]);
}
