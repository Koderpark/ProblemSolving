#include <stdio.h>

char arr[51][51] = {0};
int n;
int ans=0;

int abs(int a){return a>0?a:a*-1;}
int max(int a, int b){return a>b?a:b;}
void swap(int x1,int y1, int x2, int y2){
	int tmp = arr[x1][y1];
	arr[x1][y1] = arr[x2][y2];
	arr[x2][y2] = tmp;
}

int count(){
	int cnt, ret=0;
    char pre;
    
    for(int i=0; i<n; i++){
        cnt = 1; pre = arr[0][i];
        for(int j=1; j<=n; j++){
            if(pre == arr[j][i]) cnt++;
            else{
            	pre = arr[j][i];
                ret = max(ret,cnt);
                cnt = 1;
            }
        }
    }
    for(int i=0; i<n; i++){
        cnt = 1; pre = arr[i][0];
        for(int j=1; j<=n; j++){
            if(pre == arr[i][j]) cnt++;
            else{
            	pre = arr[i][j];
                ret = max(ret,cnt);
                cnt = 1;
            }
        }
    }
    return ret;
}

int main(){
	scanf("%d", &n);
	for(int x1=0; x1<n; x1++){
		scanf("%s", &arr[x1]);
	}
	
	for(int x1=0; x1<n; x1++) for(int y1=0; y1<n; y1++){
		for(int x2=0; x2<n; x2++) for(int y2=0; y2<n; y2++){
			if(abs(x1-x2) == 1 && abs(y1-y2) == 0){
				swap(x1,y1,x2,y2);
				ans = max(ans, count());
				swap(x1,y1,x2,y2);
			}
			if(abs(x1-x2) == 0 && abs(y1-y2) == 1){
				swap(x1,y1,x2,y2);
				ans = max(ans, count());
				swap(x1,y1,x2,y2);
			}
		}
	}
	printf("%d", ans);
	return 0;
}
