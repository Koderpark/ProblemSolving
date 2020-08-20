#include <stdio.h>
#include <vector>
 
using namespace std;

int n,r;
int arr[1000005];

int pre[1000005];
int in[1000005];

void post(int s, int e) {
    if(s == e){ printf("%d ", pre[++r]); return; }
	else if(s > e) return;
	
    int root = pre[++r];
	int p = arr[root];
    
    post(s, p-1);
    post(p+1, e);
    printf("%d ", root);
}

int main() {
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++) {
        scanf("%d", &in[i]);
        arr[in[i]] = i;
    }
    for(int i=1;i<=n;i++) {
        scanf("%d", &pre[i]);
    }
    post(1, n);
}
