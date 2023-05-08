#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

char name[10001][11] = {0};

int compare(const void *a , const void *b){return strcmp( (char*)a , (char*)b );}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%s", &name[i]);
	qsort(name, n, sizeof(name[0]), compare);
	for(int i=0; i<n; i++) printf("%s\n", name[i]);
	return 0;
}
