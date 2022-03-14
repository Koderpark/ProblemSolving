#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	int n;
	int arr[10]   = {0};
	int score[10] = {0};
	int tmp,ptr;
	
	int max  = -1;
	int max2 = -1;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		for(int j=1; j<=3; j++){
			scanf("%d", &tmp);
			arr[j] += tmp;
			score[j] += pow(10,tmp);
		}
	}
	for(int i=1; i<=3; i++){ if(max < arr[i]){ max = arr[i]; ptr = i; } }
	
	if(score[1] == score[2] && score[2] == score[3]) printf("0 %d", arr[1]);
	else printf("%d %d", ptr, arr[ptr]);
	return 0;
}
