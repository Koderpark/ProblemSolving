int f(int a){
	for(int i=0; i<n; i++){
		if(d[i] == a) return i;
	}
	return -1; 
}
