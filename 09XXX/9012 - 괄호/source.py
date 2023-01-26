import sys
input = sys.stdin.readline

N = int(input())

for i in range(N) :
    s = input()
    ans = True
    S = []

    for j in s :
        if j == '(' :
            S.append('(')
        
        if j == ')' :
            if len(S) == 0 :
                ans = False
                break
            else :
                S.pop()
    
    if len(S) != 0:
        ans = False

    if ans :
        print("YES")
    else :
        print("NO")