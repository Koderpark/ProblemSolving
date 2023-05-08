#include <stdio.h>
#include <queue>
#include <utility>
using namespace std;
typedef pair<int,int> pii;

priority_queue<pii, vector<pii>, greater<pii>> pq;

int main(){
	int n,l,k;
	scanf("%d %d", &n, &l);
	for(int i=0; i<n; i++){
		scanf("%d", &k);
		pq.push({k,i});
		
		while(i-l+1>=0 && pq.top().second < i-l+1){ pq.pop(); }
		printf("%d ", pq.top().first);
	}
	return 0;
}
