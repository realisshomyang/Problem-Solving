import sys
from collections import deque


def bfs(visited,start, end ,arr):
    q = deque()
    q.append([start,0])
    cnt = 0
    while len(q) != 0 :
        cur = q.popleft()
        cnt = max(cnt,cur[1])
        for i in arr[cur[0]]:
            if(visited[i] == True):
                continue
            if i == end :
                return cur[1]+1
            visited[i] = True   
            q.append([i,cur[1]+1])
    return cnt


input = sys.stdin.readline
N,M = map(int,input().split())
arr = [[] for _ in range(N+1)]
visited = [0]*(N+1)
for _ in range(M):
    a, b = map(int,input().split())
    arr[a].append(b)
    arr[b].append(a)
answer , index = 0 , 1


for i in range(1,N+1):
    tcnt = 0
    for j in range(1, N+1):
        if i == j :
            continue
        else:
            tcnt += bfs(visited[:],i, j, arr)
    
    if i == 1 :
        answer = tcnt
    else:
        if answer > tcnt:
            answer = tcnt
            index = i 

print(index)