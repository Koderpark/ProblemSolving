n,m = map(int,input().split())

arr = [[] for i in range(n)]

for i in range(n):
    arr[i] = list(map(int,input().split()))

for i in range(n):
    tmp = list(map(int,input().split()))
    for j in range(m):
        arr[i][j] += tmp[j]


for i in range(n):
    for j in range(m):
        print(arr[i][j], end=' ')
    print("")