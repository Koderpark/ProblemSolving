#include <stdio.h>
#include <string.h>

int main(){
	int n,len,b,cnt=0;
	char a[101] = {0};
	int check[30] = {0};
	
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		b = 1;
		scanf("%s", a);
		len = strlen(a);
		for(int i=0; i<30; i++) check[i] = 0;
		for(int i=1; i<=len; i++){
			if(a[i] != a[i-1]){
				if(check[a[i-1]-'a'] == 1)b = 0;
				check[a[i-1]-'a'] = 1;
			}
		}
		if(b)cnt++;
	}
	printf("%d", cnt);
	return 0;
}
