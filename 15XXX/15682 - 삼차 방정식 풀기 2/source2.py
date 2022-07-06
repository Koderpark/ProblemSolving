from decimal import *

n = int(input())
for i in range(n):
    ans = []
    a, b, c, d = input().split()
    a = Decimal(a)
    b = Decimal(b)
    c = Decimal(c)
    d = Decimal(d)
    sqr3 = Decimal(1.0/3.0)
    sqr2 = Decimal(1.0/2.0)
    
    ans.append(Decimal((-2*b*b*b+9*a*b*c-a*a*d+(4*(-(b*b)+3*a*c))**3+(-2*b*b*b+9*a*b*c-27*a*a*d)**sqr2)**sqr3/(3*2**sqr3*a)))
    print(ans)
