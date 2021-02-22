#include <bits/stdc++.h>
using namespace std;

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

int main(){
	int n,x;
	scanf("%d", &n);
	while(n--){
		scanf("%d", &x);
		if(x==0){
			if(pq.empty()) printf("0\n");
			else{
				auto tmp = pq.top();
				pq.pop();
				printf("%d\n", tmp.second);
			}
		}
		else{
			pq.push({abs(x), x});
		}
	}
	return 0;
}
