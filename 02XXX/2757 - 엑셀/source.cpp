#include <bits/stdc++.h>
using namespace std;

int r=0;
int c=0;

int main(){
	scanf("R%dC%d", &r, &c);
	while(r || c){
		
		char arr[7] = {'\0'};
		
		for(int i=0; c; i++){
			c--;
			arr[i] = 'A'+c%26;
			c/=26;
		}
		
		for(int i=strlen(arr)-1; i>=0; i--) printf("%c", arr[i]);
		printf("%d\n", r);
		
		getchar();
		scanf("R%dC%d", &r, &c);
	}
	return 0;
}
