#include <bits/stdc++.h>
using namespace std;

priority_queue<int> maxpq;
priority_queue<int, vector<int>, greater<int>> minpq;

int main(){
	int n,k;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &k);
		
		if(maxpq.size() <= minpq.size()) maxpq.push(k);
		else                             minpq.push(k);
		
		if(!maxpq.empty() && !minpq.empty() && maxpq.top()>minpq.top()){
			int tmp1 = maxpq.top(); maxpq.pop();
			int tmp2 = minpq.top(); minpq.pop();
			
			maxpq.push(tmp2);
			minpq.push(tmp1);
		}
		printf("%d\n", maxpq.top());
	}	
	return 0;
}
