unsigned long long int f(long long int r){   
	unsigned long long int sum = 0;
	unsigned long long int i;
	
    for(r=0;n!=0;n/=10)
    {
    	i=1;
    	while(n >= i)	i*=10;
        r=n%10;
        sum+=r*(i/10);
    }
	return sum;
}
