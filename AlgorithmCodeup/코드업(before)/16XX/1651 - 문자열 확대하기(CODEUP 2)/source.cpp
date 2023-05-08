#include <stdio.h>
#include <string.h>

char text[101][101];

int main(){
	int w,h,n;
	scanf("%d %d %d", &w, &h, &n);
	for(int i=0; i<n; i++, scanf("%s", &text[i]));
	for(int x=1; x<=n; x++){
		for(int i=0; i<h; i++){
			for(int y=0; y<strlen(text[x]); y++){
				for(int j=0; j<w; j++){
					if(text[x][y] != NULL)	printf("%c", text[x][y]);
				}
			}
			if(!(x == 6 && i == h-1)) puts("");
		}
	}
	return 0;
}
