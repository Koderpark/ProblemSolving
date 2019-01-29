long long int pow(int p, int q){
	if(q==0||q==1) return 1;
	long long int a = p;
	for(int i=1; i<q; i++) a *= p;
	return a;
}
