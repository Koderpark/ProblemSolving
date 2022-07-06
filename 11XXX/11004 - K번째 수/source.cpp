#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(){
	int n,k,tmp;
	scanf("%d %d", &n, &k);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		v.push_back(tmp);
	}
	sort(v.begin(), v.end());
	printf("%d", v[k-1]);
	return 0;
}
