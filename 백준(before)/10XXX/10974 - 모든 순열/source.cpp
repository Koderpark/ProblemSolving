#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++) v.push_back(i);
	do{
		for(int i=0; i<n; i++) printf("%d ", v[i]);
		puts("");
	}while(next_permutation(v.begin(), v.end()));
	return 0;
}
