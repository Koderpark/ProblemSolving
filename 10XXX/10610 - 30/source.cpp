#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

typedef long long int ll;
char input[100010];

int main(){
	scanf("%s", input);
	int len = strlen(input);
	ll sum = 0;
	int chk = 0;
	for(int i=0; i<len; i++){
		if(input[i] == '0') chk = 1;
		sum += input[i]-'0';
	}
	
	sort(input, input+len);
	if(chk && sum%3==0) for(int i=len-1; i>=0; i--) printf("%c", input[i]);
	else printf("-1");
	return 0;
}
