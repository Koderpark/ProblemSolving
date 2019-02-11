
#include <math.h>

long long int f(long long int r)
{    
	long long int tmp=0;
	int sum=0;

	for(long long int i=r; i!=0; i/=10, sum++);
    for(--sum;r!=0;r/=10,sum--) tmp+=r%10*pow(10 , sum);
    
	return tmp;
}


