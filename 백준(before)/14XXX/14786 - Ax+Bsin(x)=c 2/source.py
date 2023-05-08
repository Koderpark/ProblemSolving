from decimal import *
import math
getcontext().prec = 50

a,b,c = map(int,input().split())

a = Decimal(a)
b = Decimal(b)
c = Decimal(c)

s = Decimal(0)
e = Decimal(c+b)
cnt = 10000

while(cnt):
    cnt -= 1
    mid = Decimal((s+e)/2)
    val = Decimal(a*mid + b*Decimal(math.sin(mid)))

    if(val > c):
        e = mid
    else:
        s = mid

print(mid)