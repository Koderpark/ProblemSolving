#include <stdio.h>
#include <algorithm>
 
int main(){
    int n = 0;
    char name[51][11] = {0};
    int score[51] = {0};
    int backup[51] = {0};
    int i=0;
     
    scanf("%d", &n);
    for(int i=0; i<n; i++)   scanf("%s %d", &name[i] , &score[i]);
    for(int i=0; i<n; i++)  backup[i] = score[i];
     
    std::sort(&score[0], &score[n]);
     
    while(score[n-3] != backup[i++]);
     
    printf("%s", name[i-1]);
    return 0;
}
