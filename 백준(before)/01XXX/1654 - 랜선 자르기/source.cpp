#include <stdio.h>
using namespace std;
 
int k, n, cnt, ans;
int lan[10000];
long long int l, r, mid;
int main() {
    scanf("%d %d", &k, &n);

    int max = 0;
    for (int i = 0; i < k; ++i) {
        scanf("%d", &lan[i]);
        if(max < lan[i]) max = lan[i];
    }
    
    l = 1;
	r = max;
 
    while (l <= r) {
    	cnt = 0;
        mid = (l + r) / 2;
    	for (int i=0; i<k; i++) cnt += lan[i]/mid;
    	
        if(cnt >= n){ l = mid+1; if(mid>ans) ans=mid; }
        else 		  r = mid-1;
    }
 
    printf("%d", ans);
 
    return 0;
}

