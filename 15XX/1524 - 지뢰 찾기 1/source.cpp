#include <stdio.h>

int main(){
    int data[10][10] = {0};
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d", &data[i][j]);
        }
    }
    int x,y;
    int mine = 0;
    scanf("%d %d", &x, &y);
    x--;
    y--;
    if(data[x][y] == 1){
        printf("-1");
    }else{
        if(data[x+1][y] == 1) mine++;
        if(data[x-1][y] == 1) mine++;
        if(data[x][y+1] == 1) mine++;
        if(data[x][y-1] == 1) mine++;
        if(data[x+1][y+1] == 1) mine++;
        if(data[x+1][y-1] == 1) mine++;
        if(data[x-1][y+1] == 1) mine++;
        if(data[x-1][y-1] == 1) mine++;
        printf("%d",mine);
    }
    return 0;
}
