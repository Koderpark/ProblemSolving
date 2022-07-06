long long int lcd(int p, int q){
	long long int a=gcd(p,q);
	return (p/a)*(q/a)*a;
}
