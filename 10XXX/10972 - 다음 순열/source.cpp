#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n;
	scanf("%d", &n);
	vector<int> v(n);
	for(int i=0; i<n; i++) scanf("%d", &v[i]);
	
	if(!next_permutation(v.begin(), v.end())){
		printf("-1");
		return 0;
	}
	for(int i=0; i<n; i++){
		printf("%d ", v[i]);
	}
	return 0;
}
