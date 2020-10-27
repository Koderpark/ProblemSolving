from decimal import *
getcontext().prec = 50
n = int(input())
for i in range(n):
    ans = []
    a, b, c, d = input().split()
    a = Decimal(a)
    b = Decimal(b)
    c = Decimal(c)
    d = Decimal(d)

    a2 = Decimal(3*a)
    b2 = Decimal(2*b)
    c2 = Decimal(c)

    equal = Decimal(1e-15)
    val = Decimal(b2*b2- 4*a2*c2)
    
    if val < 0 : #미분된 이차식의 실근이 없음. -> 실근 한개
        s = -1000000
        e = 1000000
        while 1:
            m = Decimal((s+e)/2)
            val = Decimal(a*m*m*m + b*m*m + c*m + d)
            if abs(val) <= equal :
                print(m)
                break
            elif val > 0 :
                e = m
            elif val < 0 :
                s = m

    if val == 0 : #미분된 이차식의 실근이 하나. -> 실근 한개
        s = -1000000
        e = 1000000
        while 1:
            m = Decimal((s+e)/2)
            val = Decimal(a*m*m*m + b*m*m + c*m + d)
            if abs(val) <= equal :
                print(m)
                break
            elif val > 0 :
                e = m
            elif val < 0 :
                s = m

    if val > 0 :#미분된 이차식의 실근이 두개. -> 실근 1~3
        x1 = Decimal((-b2 + val.sqrt())/(2*a2))
        x2 = Decimal((-b2 - val.sqrt())/(2*a2))

        y1 = Decimal(a*x1**3 + b*x1**2 + c*x1 + d)
        y2 = Decimal(a*x2**3 + b*x2**2 + c*x2 + d)
        
        if y1*y2 <= 0 : #극대 - 극소 사이에 해가 존재함.
            val = Decimal(a*x1*x1*x1 + b*x1*x1 + c*x1 + d)
            val2 = Decimal(a*x2*x2*x2 + b*x2*x2 + c*x2 + d)
            print(val, val2, 'test')
            if abs(val) <= equal :
                ans.append(x1)
            elif abs(val2) <= equal :
                ans.append(x2)
            else :
                print("case #3-1")
                s = x2
                e = x1
                while 1:
                    m = Decimal((s+e)/2)
                    val = Decimal(a*m*m*m + b*m*m + c*m + d)
                    print(s,e,val)
                    if abs(val) <= equal :
                        ans.append(m)
                        break
                    elif val > 0 :
                            e = m
                    elif val < 0 :
                        s = m
        
        if a>0 and y2>0 : #-무한 - 극대 사이에 해가 존재함.
            s = -1000000
            e = x2
            while 1:
                m = Decimal((s+e)/2)
                val = Decimal(a*m*m*m + b*m*m + c*m + d)
                if abs(val) <= equal :
                    ans.append(m)
                    break
                elif val > 0 :
                    e = m
                elif val < 0 :
                    s = m

        if a<0 and y2>0 : #극대 - 무한 사이에 해가 존재함.
            s = x2
            e = 1000000
            while 1:
                m = Decimal((s+e)/2)
                val = Decimal(a*m*m*m + b*m*m + c*m + d)
                if abs(val) <= equal :
                    ans.append(m)
                    break
                elif val > 0 :
                    e = m
                elif val < 0 :
                    s = m

        if a>0 and y1<0 : #극소 - 무한 사이에 해가 존재함.
            s = x1
            e = 1000000
            while 1:
                m = Decimal((s+e)/2)
                val = Decimal(a*m*m*m + b*m*m + c*m + d)
                if abs(val) <= equal :
                    ans.append(m)
                    break
                elif val > 0 :
                    e = m
                elif val < 0 :
                    s = m

        if a<0 and y1<0 : #-무한 - 극소 사이에 해가 존재함.
            s = -1000000
            e = x1
            while 1:
                m = Decimal((s+e)/2)
                val = Decimal(a*m*m*m + b*m*m + c*m + d)
                if abs(val) <= equal :
                    ans.append(m)
                    break
                elif val > 0 :
                    e = m
                elif val < 0 :
                    s = m

        ans.sort()
        for i in ans :
            print(i, end=' ')
        print("")
