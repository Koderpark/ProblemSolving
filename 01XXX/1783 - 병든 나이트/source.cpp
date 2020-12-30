#include <stdio.h>

int min(int a, int b){ return a>b?b:a; }

int main(){
	int n,m;
	scanf("%d %d", &n, &m);
	
	if(n==1) printf("%d", 1); //한칸 
	else if(n==2) printf("%d", min((m-1)/2+1, 4));   /* /\/\/\ 처럼 이동할때 */
	else if(n>=3){
		if(m>=7) {printf("%d", m-2);}                /* 두번 은 가로로 길게, 그다음 /\/\/\ */
		else     {printf("%d", min(m,4));}		 	 /* /\/\/\ 처럼 이동할때 */
	}
	return 0;
}
