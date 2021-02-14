import math

n,m = map(int, input().split())

tmp1 = math.factorial(n)
tmp2 = math.factorial(n-m)
tmp3 = math.factorial(m)

print(tmp1 // (tmp2*tmp3))
