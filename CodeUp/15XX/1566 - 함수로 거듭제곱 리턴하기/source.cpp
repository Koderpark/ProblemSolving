long long int pow(int a, int b){
	long long int x=a;
	if(b == 0) return 1;
	if(a == 1) return 1;
	for(int i=1; i<b; i++)x*=a;
	return x;
}
