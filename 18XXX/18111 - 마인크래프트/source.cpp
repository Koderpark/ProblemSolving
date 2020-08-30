#include <stdio.h>
 
int main() {
    int n,m,k, tmp, max = 0, ans = 2147483647, h,a,b,inv,time;
    int g[257] = {0};
    scanf("%d %d %d", &n, &m, &k);

    for (int i=0; i<n; i++) for (int j=0; j<m; j++){ scanf("%d", &tmp); g[tmp] += 1; }
    
    for(int i=0; i<257; i++) if(g[i] != 0 && i > max) max = i;
    
    for (int i=max; i>=0; i--){
        a = 0;
		b = 0;
		inv = k;
		time = 0;
        for (int j=0; j<257; j++) {
            if(j<i && g[j] != 0) 	  a += g[j] * (i - j);
            else if(j>i && g[j] != 0) b += g[j] * (j - i);
        }
        time += a+b*2;
        inv += b-a;
        if (inv>=0 && time<ans){ ans = time; h = i; }
    }
    printf("%d %d\n", ans, h);
    return 0;
}

