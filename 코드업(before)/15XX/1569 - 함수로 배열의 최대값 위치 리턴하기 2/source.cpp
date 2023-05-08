int findi(int a){
	for(int i=1; i<=n; i++){
		if(d[i] == a) return i;
	}
	return -1;
}
