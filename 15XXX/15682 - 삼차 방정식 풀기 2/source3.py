from decimal import *
import sys
getcontext().prec = 30

def divlist(k):
    l = []
    for i in range(1, int(k.sqrt()+1)):
        if()

n = int(sys.stdin.readline())
for i in range(n):
    ans = set()
    a, b, c, d = sys.stdin.readline().split()
    a = Decimal(a)
    b = Decimal(b)
    c = Decimal(c)
    d = Decimal(d)

    for i in range(-1000000, 1000001):
        if(a*(i**3) + b*(i**2) + c*i + d == 0):
            ans.add(Decimal(i))
            break


    b += Decimal(a*list(ans)[0])
    c += Decimal(b*list(ans)[0])

    inner = Decimal(b**2 - 4*a*c)

    if(inner >= 0):
        ans.add(Decimal((-b+inner.sqrt())/(a*2)))
        ans.add(Decimal((-b-inner.sqrt())/(a*2)))
    

    for i in ans :
        print(format(i, '.15f'), end=' ')
    print("")
