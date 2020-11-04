#include <stdio.h>
#include <set>

using namespace std;

multiset<int> ms;

int main(){
	int n;
	int tmp;
	auto it = ms.begin();
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		ms.insert(tmp);
		if(tmp < *it) it--;
		else if(tmp > *it) it++;
		
		if(i%2==1){ it--; printf("=%d=", *it); it++; }
		else 			  printf("=%d=", *it);
		for(auto j=ms.begin(); j!=ms.end(); j++) printf("%d ", *j);
	}
	return 0;
}
