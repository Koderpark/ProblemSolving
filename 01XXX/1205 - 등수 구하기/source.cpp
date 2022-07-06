#include <stdio.h>

int main(){
	int n,s,p,s1=0,s2=0;
	int rank[50] = {0};
	
	scanf("%d %d %d", &n, &s, &p);
	for(int i=0; i<n; i++){
		scanf("%d", &rank[i]);
		if(rank[i]>s) s1++;
		if(rank[i]>=s)s2++;
	}
	s1++;
	s2++;
	
	if(s1>p) 	   printf("-1");
	else if (s2>p) printf("-1");
	else 		   printf("%d", s1);
	return 0;
}
