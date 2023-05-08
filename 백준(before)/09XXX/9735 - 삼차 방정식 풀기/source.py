from decimal import *
getcontext().prec=12

n = int(input())
for i in range(n):
    ans = []
    a, b, c, d = input().split()
    a = int(a)
    b = int(b)
    c = int(c)
    d = int(d)

    for j in range(-1000000, 1000001):
        if a*j*j*j + b*j*j + c*j + d == 0 :
            ans.append(Decimal(j))
            break
    a = Decimal(a)
    b = Decimal(a)*ans[0]+Decimal(b)
    c = Decimal(b)*ans[0]+Decimal(c)

    if b*b - 4*a*c < 0 :
        print(ans[0])
    elif b*b - 4*a*c == 0 :
        ans.append(Decimal(-b/(2*a)))
        ans.sort()
        if ans[0] == ans[1] :
            print(ans[0])
        else :
            print(ans[0],ans[1])
    elif b*b - 4*a*c > 0 :
        ans.append(Decimal(-b+(b*b-4*a*c)**Decimal(0.5))/(2*a))
        ans.append(Decimal(-b-(b*b-4*a*c)**Decimal(0.5))/(2*a))
        ans.sort()
        if ans[0] == ans[1] :
            print(ans[0],ans[2])
        elif ans[1] == ans[2] :
            print(ans[0],ans[1])
        else :
            print(ans[0],ans[1],ans[2])
