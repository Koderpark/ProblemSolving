from collections import deque

deq = deque()

N = int(input())
for i in range(1,N+1) :
    deq.append(i)


while(len(deq) > 1) :
    deq.popleft()
    deq.rotate(-1)

print(deq.pop())
