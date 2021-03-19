#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

int chk[250000] = {0};

int pow(int x, int t){
	if(t == 1) return x;
	int tmp = pow(x,t/2);
	if(t%2 == 1) return tmp*tmp*x;
	else return tmp*tmp;
}

int main(){
	int a,p;
	int tmp;
	int cnt = 1;
	scanf("%d %d", &a, &p);
	while(1){
		tmp = 0;
		chk[a] = cnt++;
		for(int i=a; i>0; i/=10) tmp += pow(i%10,p);
		if(chk[tmp] != 0){
			printf("%d", chk[tmp]-1);
			break;
		}
		a = tmp;
		scanf("");
	}
	return 0;
}
