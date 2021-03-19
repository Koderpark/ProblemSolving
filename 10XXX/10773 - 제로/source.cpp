#include <stdio.h>
#include <stack>
using namespace std;

int main(){
	int t,tmp,sum=0;
	stack<int> s;
	scanf("%d", &t);
	for(int i=0; i<t; i++){
		scanf("%d", &tmp);
		if(tmp == 0) s.pop();
		else s.push(tmp);
	}
	while(!s.empty()){
		sum+=s.top();
		s.pop();
	}
	printf("%d", sum);
	return 0;
}
