#include <stdio.h>
#include <set>

using namespace std;

int main(){
	int tmp,n;
	set<int> s;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		s.insert(tmp);
	}
	set<int>::iterator it = s.begin();
	for(int i=0; i<n; i++){
		printf("%d ", it[i]);
	}
}
