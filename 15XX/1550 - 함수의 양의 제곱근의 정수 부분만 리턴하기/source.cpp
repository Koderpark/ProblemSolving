int sqrt(long long int n){
	if(n == 0) return 0;
	int i;
	long long int x = 1;
	for(int i=0; i<100; i++) {  x = (x + (n / x)) / 2 ; }
	return x;
}
