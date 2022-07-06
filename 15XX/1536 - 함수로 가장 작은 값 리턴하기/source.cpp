long long int f(){
	long long int min = d[1];
	int i;
	for(i=1; i<=n; i++){
		if(d[i] < min) min = d[i];
	}
	return min;
}
