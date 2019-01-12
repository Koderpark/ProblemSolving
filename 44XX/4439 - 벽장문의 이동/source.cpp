#include <stdio.h>
#include <algorithm>
using namespace std;
 
int o[21],n,m;
 
int open(int a,int b, int c){
    int d,e;
    if(c == m) return 0;
    if(o[c] <= a) return open(o[c], b,c+1)+(a-o[c]);
    if(o[c] >= b) return open(a,o[c], c+1)+(o[c]-b);
    d= open(o[c], b,c+1)+(o[c]-a);
    e= open(a,o[c], c+1)+(b-o[c]);
 
    return d>e?e:d;
}
 
int main(){
    int a,b;
    scanf("%d", &n);
    scanf("%d %d", &a, &b);
    scanf("%d", &m);
    for(int i=0; i<m; i++) scanf("%d", &o[i]);
    printf("%d", open(a,b,0));
}
