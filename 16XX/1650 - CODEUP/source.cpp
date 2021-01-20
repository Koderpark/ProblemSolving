#include <stdio.h>
#include <string.h>

char text[8][36] = {
    " ****  ***  ***   ***** *   * ****",
    "*     *   * *  *  *     *   * *   *",
    "*     *   * *   * *     *   * *   *",
    "*     *   * *   * ****  *   * ****",
    "*     *   * *   * *     *   * *",
    "*     *   * *  *  *     *   * *",
    " ****  ***  ***   *****  ***  *"
};

int main(){
	int w,h;
	scanf("%d %d", &w, &h);
	for(int x=0; x<7; x++){
		for(int i=0; i<h; i++){
			for(int y=0; y<strlen(text[x]); y++){
				for(int j=0; j<w; j++){
					printf("%c", text[x][y]);
				}
			}
			if(!(x == 6 && i == h-1)) puts("");
		}
	}
	return 0;
}
