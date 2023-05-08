n = int(input())
m = int(input())
k = 0
for i in range(m):
    a,b = map(int,input().split())
    k += a*b

if(k == n):
    print("Yes")
else:
    print("No")