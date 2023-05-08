#include <bits/stdc++.h>
using namespace std;

vector<int> arr;

void f(int s, int e){
	int root = s;
	int tmp = s++;
	while(++tmp<arr.size() && arr[tmp]<arr[root]);
	if(s <  tmp) f(s,tmp-1);
	if(e >= tmp) f(tmp, e);
	printf("%d\n", arr[root]);
	return;
}

int main(){
	int a;
	arr.push_back(0); // dummy
	while(scanf("%d", &a) != EOF) arr.push_back(a);
	f(1,arr.size()-1);
	return 0;
}
