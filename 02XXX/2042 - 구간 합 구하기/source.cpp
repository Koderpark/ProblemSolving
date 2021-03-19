#include<stdio.h>

typedef long long int ll;
ll tree[3000000];
ll num[1000001];

void update(int n, int s, int e, int t, int diff){
    if (s<=t && t<=e) tree[n] += diff;
    else return;
    if (s == e) return;
    
    int m = (s + e) / 2;
    update(n * 2, s, m, t, diff);
    update(n * 2 + 1, m + 1, e, t, diff);
}

ll sum(int l, int r, int n, int s, int e){
    if (l <= s && e <= r) return tree[n];
    if (r < s || e < l)   return 0;
 
    int m = (s + e) / 2;
    return sum(l, r, n * 2, s, m) + sum(l, r, n * 2 + 1, m + 1, e);
}

ll init(int n, int s, int e){
    if (s == e) return tree[n] = num[s];
    
    int m = (s + e) / 2;
    tree[n] = init(n * 2, s, m) + init(n * 2 + 1, m + 1, e);
    return tree[n];
}

int main(){
    int n,m,k;
    int a,b,c;
    int diff;
    scanf("%d %d %d", &n, &m, &k);
    for(int i=1; i<=n; i++) scanf("%lld", &num[i]);
    
    init(1, 1, n);
    
    for(int i=0; i<m+k; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a==1){ diff = c-num[b]; num[b]=c; update(1, 1, n, b, diff); }
        else	  printf("%lld\n", sum(b, c, 1, 1, n));
    }
    return 0;
}
