import sys
input = sys.stdin.readline

n = int(input())
s = []

for i in range(n) :
    a = input().split()

    if a[0] == "push" :
        b = int(a[1])
        s.append(b)
    
    if a[0] == "pop" :
        if len(s) == 0 :
            print(-1)
        else :
            print(s[-1])
            s.pop()
    
    if a[0] == "size" :
        print(len(s))
    
    if a[0] == "empty" :
        if len(s) != 0: 
            print(0)
        else :
            print(1)
    
    if a[0] == "top" :
        if len(s) == 0 :
            print(-1)
        else :
            print(s[-1])