import sys
from collections import deque
input = sys.stdin.readline

n = int(input())
q = deque()
for i in range(n):
    tmp = input().split()
    if(len(tmp) == 2):
        q.append(tmp[1])
    
    if tmp[0] == 'front':
        if len(q) == 0:
            print(-1)
        else:
            print(q[0])
    if tmp[0] == 'back':
        if len(q) == 0:
            print(-1)
        else:
            print(q[-1])
    if tmp[0] == 'empty':
        if(len(q) == 0):
            print(1)
        else:
            print(0)

    if tmp[0] == 'size':
        print(len(q))
    if tmp[0] == 'pop':
        if(len(q) ==0) :
            print(-1)
        else:
            print(q.popleft())
    

