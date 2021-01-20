#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

int arr[234567];

void manacher(string s, int len){
    int rad=0;
	int cen=0; 
    for(int i=0; i<len; i++){
        if(i <= rad) arr[i] = min(rad-i, arr[2*cen-i]);
        else arr[i] = 0;
        
        while(i-arr[i]-1>=0 && i+arr[i]+1<len && s[i-arr[i]-1] == s[i+arr[i]+1]) arr[i]++;
        
        if( rad < i+arr[i]){
			rad = i+arr[i];
			cen = i;
		}
    }
}

int main(){
	int maxV=0;
	int maxP=0;
	string input, str;
    cin >> input;
    
	str += '.';
    for(int i=0; i<input.size(); i++){ str += input[i]; str += '.'; }
	
 	int len = str.size();
    manacher(str, str.size());
	
    for(int i=0; i<len; i++){
    	if(maxV < arr[i]){
    		maxV = arr[i];
    		maxP = i;
		}
	}
 	
    printf("%d\n", maxV);
 	//for(int i=maxP-maxV; i<=maxP+maxV; i++) if(str[i] != '.') printf("%c", str[i]);
    return 0;
}
