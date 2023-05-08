#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> permu;

int main(){
	int n,m,k;
	scanf("%d %d %d", &n, &m, &k);

	for(int i=0; i<n; i++) permu.push_back(0);
	for(int i=0; i<m; i++) permu.push_back(1);
	
	for(int i=1; i<k; i++){
		next_permutation(permu.begin(), permu.end());
	}
	
	for(int i=0; i<permu.size(); i++) printf("%c", permu[i]?'z':'a');
	return 0;
}
