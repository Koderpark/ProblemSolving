#include <bits/stdc++.h>
using namespace std;

priority_queue<int> pq;

int main(){
	int n,a;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &a);
		if(a == 0){
			if(pq.empty()) printf("0\n");
			else{
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else{
			pq.push(a);
		}
	}
	return 0;
}
