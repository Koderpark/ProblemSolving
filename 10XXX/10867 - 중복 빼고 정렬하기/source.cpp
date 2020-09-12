#include <stdio.h>
#include <set>

using namespace std;

set<int> s;

int main(){
	int n,tmp;
	scanf("%d", &n);
	while(n--){ scanf("%d", &tmp); s.insert(tmp); }
	for(auto it=s.begin(); it!=s.end(); it++) printf("%d ", *it);
	return 0;
}
