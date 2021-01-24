#include <bits/stdc++.h>
#define fir first
#define sec second

using namespace std;
typedef long long int ll;

priority_queue<int, vector<int>, greater<int>> pq;
pair<int,int> input[234567];

int main(){
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++) scanf("%d %d", &input[i].fir, &input[i].sec);
	
	sort(input, input+n);
	
	pq.push(input[0].second);
	for(int i=1; i<n; i++){
		if(pq.top() <= input[i].first){
			pq.pop();
			pq.push(input[i].second);
		}
		else pq.push(input[i].second);
	}
	
	printf("%d", pq.size());
	return 0;
}
