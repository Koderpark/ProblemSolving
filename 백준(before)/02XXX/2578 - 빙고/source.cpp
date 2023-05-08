#include <stdio.h>

int board[10][10] = {0};

void check(int k){
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(board[i][j] == k) board[i][j] = 0;
		}
	}
}

int bingo(){
	int tmp;
	int chk = 0;
	
	for(int i=0; i<5; i++){
		tmp = 0; 
		for(int j=0; j<5; j++) tmp+=board[i][j];
		if(tmp == 0) chk++;
	}
	
	for(int i=0; i<5; i++){
		tmp = 0; 
		for(int j=0; j<5; j++) tmp+=board[j][i];
		if(tmp == 0) chk++;
	}
	
	tmp = 0;
	for(int i=0; i<5; i++) tmp+=board[i][i];
	if(tmp == 0) chk++;
	
	tmp = 0;
	for(int i=0; i<5; i++) tmp += board[4-i][i];
	if(tmp == 0) chk++;
	
	if(chk >= 3) return 1;
	else return 0;
}

int main(){
	int k;
	for(int i=0; i<5; i++) for(int j=0; j<5; j++) scanf("%d", &board[i][j]);
	for(int i=1; i<=25; i++){
		scanf("%d", &k);
		check(k);
		if(bingo()){
			printf("%d", i);
			break;
		}
	}
	return 0;
}
