#include <stdio.h>
#include <vector>

using namespace std;

vector<int> v1(1000010, 1234567890);
vector<int> v2(1000010, 1234567890);

int main(){
	int n,m,tmp;
	int ptr1=0;
	int ptr2=0;
	
	scanf("%d %d", &n, &m);
	for(int i=0; i<n; i++) scanf("%d", &v1[i]);
	for(int i=0; i<m; i++) scanf("%d", &v2[i]);
	
	for(int i=0; i<n+m; i++){
		if(v1[ptr1]<v2[ptr2] )  printf("%d ", v1[ptr1++]);
		else				    printf("%d ", v2[ptr2++]);
	}
	return 0;
}
