#include <algorithm>
#include <cstring>
#include <stdio.h>

char *s[20000];

bool comp(char *s1, char *s2){
	return strcmp(s1, s2)<0;
}

int main()
{
	int n;	
	char tmp[51];
	
	scanf("%d", &n);

	for(int i=0;i<n;++i){	
		scanf("%s", tmp);
		s[i] = new char[strlen(tmp)+3];
		sprintf(s[i], "%02d%s", strlen(tmp), tmp);
	}	

	std::sort(s, s+n, comp);

	for(int i=0;i<n;++i){
		if(i>0 && strcmp(s[i-1], s[i])==0)continue;
		printf("%s\n", &s[i][2]);
	}
	return 0;
}
