#include <iostream>

using namespace std;

struct tree{
	int left;
	int right;
};

tree T[256] = {0};
int chk1[256] = {0};
int chk2[256] = {0};
int chk3[256] = {0};

void find1(int node){
	printf("%c", node);
	if(T[node].left  != '.') find1(T[node].left);
	if(T[node].right != '.') find1(T[node].right);
	return;
}

void find2(int node){
	if(T[node].left  != '.') find2(T[node].left);
	printf("%c", node);
	if(T[node].right != '.') find2(T[node].right);
	return;
}

void find3(int node){
	if(T[node].left  != '.') find3(T[node].left);
	if(T[node].right != '.') find3(T[node].right);
	printf("%c", node);
	return;
}

int main(){
	int n;
	char t1,t2,t3;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> t1 >> t2 >> t3;
		T[t1].left = t2;
		T[t1].right = t3;
	}
	
	find1('A'); puts("");
	find2('A'); puts("");
	find3('A'); puts("");
	return 0;
}
