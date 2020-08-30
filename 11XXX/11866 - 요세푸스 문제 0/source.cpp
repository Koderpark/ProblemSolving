#include <stdio.h>
#include <vector>
#include <list>
 
using namespace std;

vector<int> ans;
list<int> arr;

int main(){
	int n,k;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=n; i++) arr.push_back(i);
	auto it = arr.begin();
	while(!arr.empty()){
		for(int i=0; i<k-1; i++){
			it++;
			if(it==arr.end()) it = arr.begin();
		}
		ans.push_back(*it);
		it = arr.erase(it);
		if(it==arr.end()) it = arr.begin();
	}
	printf("<");
	for(int i=0; i<n; i++) printf("%d%s", ans[i], i==n-1?"":", ");
	printf(">");
	return 0;
}
