#include <bits/stdc++.h>
using namespace std;

int arr[1234] = {0};
int tree[1234] = {0};

void search(int s, int e, int idx){
	int m = (s+e)/2;
	tree[idx] = arr[m];
	if(s>=e) return;
	
	search(s,m-1, idx*2);
	search(m+1,e, idx*2+1);
	return;
}

int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<1<<n; i++){ scanf("%d", &arr[i]); }
	search(1,(1<<n)-1,1);
	
	int combo1=1;
	int combo2=0;
	for(int i=1; i<1<<n; i++,combo2++){
		if(combo1 == combo2){
			combo2 = 0;
			combo1 *= 2;
			puts("");
		}
		printf("%d ", tree[i]);
	}
}
