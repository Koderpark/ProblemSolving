#include <stdio.h>

int main(){
	int n,m;
	char s[21][11] = {0};
	char t[21][11] = {0};
	int time;
	int q;
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%s", &s[i]);
	for(int i=0; i<m; i++) scanf("%s", &t[i]);
	scanf("%d", &time);
	for(int i=0; i<time; i++){
		scanf("%d", &q);
		printf("%s%s\n",s[(q-1)%n], t[(q-1)%m]);
	}
	return 0;
}
