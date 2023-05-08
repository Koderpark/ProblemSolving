long long int f(int a){
	long long int sum=1;
	for(int i=1; i<=a; i++){
		sum*=i;
	}
	return sum;
}
