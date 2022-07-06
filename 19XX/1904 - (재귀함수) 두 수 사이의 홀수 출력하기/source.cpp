#include <stdio.h>

void f(int start, int end){
	if(start % 2 == 1) printf("%d\n", start);
	if(start == end) return;
	return f(++start, end);
}

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	f(a,b);
	return 0;
}
