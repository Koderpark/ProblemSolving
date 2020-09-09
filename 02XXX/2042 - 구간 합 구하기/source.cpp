#include <stdio.h>
#include <vector>

using namespace std;
typedef long long int ll;

vector<ll> tree(4000001);
vector<ll> arr(1000001);

ll init(int node, int start, int end){
    if (start == end) return tree[node] = arr[start];
    int mid = (start + end) / 2;
    return tree[node] = init(node * 2, start, mid) + init(node * 2 + 1, mid + 1, end);
}

void update(int node, int start, int end, int index, ll diff)
{
    if (!(start <= index && index <= end)) return;
    tree[node] += diff;
    if(start != end)
    {
        int mid = (start + end) / 2;
        update(node * 2, start, mid, index, diff);
        update(node * 2 + 1, mid + 1, end, index, diff);
    }
}

ll sum(int node, int start, int end, int left, int right){
    if (left > end || right < start) return 0;
    if (left <= start && end <= right) return tree[node];
    int mid = (start + end) / 2;
    return sum(node * 2, start, mid, left, right) + sum(node*2+1, mid+1, end, left, right);
}

int main(){
	int n,m,k;
	ll  a,b,c;
	scanf("%d %d %d", &n, &m, &k);
	for(int i=1; i<=n;   i++) scanf("%lld", &arr[i]);
	init(1, 0, n-1);
	for(int i=1; i<=m+k; i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a==1) update(1,0,n-1,b,c);
		if(a==2) printf("%lld\n", sum(1,0,n-1,b-1,c-1));
	}
	return 0;
}

