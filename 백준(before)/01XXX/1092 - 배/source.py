from collections import deque
import sys

input = sys.stdin.readline

N = int(input())
limit = list(map(int,input().split()))

M = int(input())
box = list(map(int,input().split()))

limit.sort(reverse=True)
box.sort(reverse=True)

ans = 0

if box[0] > limit[0] :
    print(-1)
else :
    while len(box) != 0 :
        ans+=1
        for i in limit :
            for j in box :
                if i >= j :
                    box.remove(j)
                    break

    print(ans)