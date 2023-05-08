int mid(int a, int b, int c){
	if(max(a,b) == a){ // a>b
		if(max(b,c) == b){ return b;}
		else{ return min(a,c);}
	}
	else{
		if(max(b,c) == c){ return b;}
		else{ return max(a,c);}
	}
}
