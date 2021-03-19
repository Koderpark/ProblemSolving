#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

vector<int> v;

int main(){
	int a, b;
	int n;
	int tmp;
	int decimal = 0;
	scanf("%d %d", &a, &b);
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &tmp);
		decimal += tmp * pow(a,n-i-1);
	}
	while(1){
		v.push_back(decimal % b);
		decimal /= b;
		if(decimal == 0) break;
	}
	
	for(auto it = v.rbegin(); it!=v.rend(); it++) printf("%d ", *it);
	return 0;
}
