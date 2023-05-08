from collections import deque
import sys
input = sys.stdin.readline

deq = deque()

N = int(input())

for i in range(N) :
    K = input().split()
    if K[0] == "push" :
        deq.append(int(K[1]))
    
    if K[0] == "pop" :
        if len(deq) == 0 :
            print(-1)
        else :
            print(deq.popleft())
    
    if K[0] == "size" :
        print(len(deq))
    
    if K[0] == "empty" :
        if len(deq) == 0 :
            print(1)
        else :
            print(0)
    
    if K[0] == "front" :
        if len(deq) == 0 :
            print(-1)
        else :
            print(deq[0])
    
    if K[0] == "back" :
        if len(deq) == 0 :
            print(-1)
        else :
            print(deq[-1])