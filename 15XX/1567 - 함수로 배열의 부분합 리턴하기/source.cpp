long long int subsetsum(int a, int b){
	long long int sum=0;
	for(int i=a; i<=b; i++){
		sum+=d[i];
	}
	return sum;
}
