from decimal import *
import math
getcontext().prec = 50
getcontext().rounding = ROUND_HALF_UP
pi = Decimal('3.14159265358979323846264338327950288419716939937510')

a,b,c = map(Decimal,map(int,input().split()))

def sin(x):
    x = x % (2*pi)
    getcontext().prec += 2
    i, lasts, s, fact, num, sign = 1, 0, x, 1, x, 1
    while s != lasts:
        lasts = s
        i += 2
        fact *= i * (i-1)
        num *= x * x
        sign *= -1
        s += num / fact * sign
    getcontext().prec -= 2
    return +s

s = Decimal('0.0')
e = Decimal('200000.0')
cnt = 50000

while(cnt):
    cnt -= 1
    mid = Decimal((s+e)/2)
    val = Decimal(a*mid + b*sin(mid))

    if(val > c):
        e = mid
    else:
        s = mid

print(round(mid,6))