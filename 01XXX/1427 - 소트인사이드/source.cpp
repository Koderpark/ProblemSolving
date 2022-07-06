#include <stdio.h>
#include <string.h>
#include <algorithm>

bool c(int a, int b){
	return a>b;
}

int main(){
	char a[11] = {0};
	scanf("%s", &a);
	std::sort(a, a+strlen(a),c);
	printf("%s", a);
	return 0;
}
