#include <stdio.h>
#include <algorithm>

using namespace std;

int a[1010];
int b[1010];

int main(){
	int n;
	int ptr;
	int sum=0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) scanf("%d", &a[i]);
	for(int i=0; i<n; i++) b[i] = a[i];
	
	sort(b, b+n);
	for(int i=0; i<n; i++){
		if(a[i] == b[i]) a[i] = 0;
		if(a[i] == b[0]) ptr = i;
	}
	while(a[0] != b[0]){
		for(int j=0; j<n; j++){
			if(a[j] == b[ptr]){
				sum+=a[j] + b[0];
				a[j] = b[0];
				a[ptr] = 0;
			}
		}
		for(int j=0; j<n; j++) if(a[j] == b[0]) ptr = j;
	}
	printf("%d", sum);
}
