int f(int a){
	int sum=0;
	for(int i=1; i<=a; i++){
		if(a % i == 0){
			sum++;
		}
	}
	return sum;
}
