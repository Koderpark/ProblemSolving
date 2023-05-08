#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
	a/=10000;
    if (b==1||b==2)	printf("%d",2012-(1900+a)+1);
    else			printf("%d",2012-(2000+a)+1);
    return 0;
}
