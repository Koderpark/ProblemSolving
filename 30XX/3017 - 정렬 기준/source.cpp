#include <stdio.h>
#include <algorithm>

struct data {
    int math;
    int info;
    int num;
}arr[1001];

bool compare(data a, data b) {
    if(a.math > b.math){
    	return true;
	}else if(a.math == b.math){
    	if(a.info > b.info){
    		return true;
		}else if(a.info==b.info){
			if(a.num < b.num){
				return true;
			}
			else{return false;}
		}
		else{return false;}
	}
	else{return false;}
}

int main() {

    int n;
    scanf("%d", &n);

    for (int i=0; i<n; i++){
    	scanf("%d %d", &arr[i].math, &arr[i].info);
    	arr[i].num = i+1;
	}
    std::sort(arr, arr+n, compare);
    for(int i=0; i<n; i++) 	printf("%d %d %d\n", arr[i].num, arr[i].math, arr[i].info);
    return 0;
}
