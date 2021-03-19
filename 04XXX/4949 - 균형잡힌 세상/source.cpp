#include <stdio.h>
#define MOD 1234567891

typedef unsigned long long int ll;

int n;
ll ans;
ll k = 1;
char str[51];
 
int main(){
	scanf("%d", &n);
	scanf("%s", str);
    for(int i=0; i<n; i++){
        ans = (ans + (str[i] - 'a' + 1) * k) % MOD;
        k = (k*31)%MOD;
    }
    printf("%d", ans);
    return 0;
}
