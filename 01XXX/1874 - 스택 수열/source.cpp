#include <stdio.h>
#include <stack>

char out[1000001] = {0};
int input[100001] = {0};

int main(){
	int n,a,sum=0,ptr=0;
	std::stack<int> s;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++) scanf("%d", &input[i]);
	
	for(int i=1; i<=n; i++){
		s.push(i);
		out[ptr++] = '+';
		while( !s.empty() && s.top()==input[sum] ){
			s.pop();
			out[ptr++] = '-';
			sum++;
		}
	}
	if(s.empty()) for(int i=0; i<ptr; i++) printf("%c\n",out[i]);
	else puts("NO");
	return 0;
}
