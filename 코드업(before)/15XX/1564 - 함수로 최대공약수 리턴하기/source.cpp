int gcd(int p, int q){
	int g = 0;
	for(int i=1; i<=(p>q?q:p); i++){
		if(p % i == 0 && q % i == 0){
			g = i;
		}
	}
	return g;
}
