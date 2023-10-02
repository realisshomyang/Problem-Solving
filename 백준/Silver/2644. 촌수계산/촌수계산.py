import sys
from collections import deque

input = sys.stdin.readline
n = int(input())
N, M = map(int,input().split())
k = int(input())

def bfs(start, end, visited, graph):
    q = deque()
    q.append((start,0))
    while(len(q)!= 0):
        cur = q.popleft()
        for x in graph[cur[0]]:
            if x == end:
                return cur[1]+1
            if visited[x]:
                continue
            visited[x] = True
            q.append((x,cur[1]+1))
    return -1

graph = [[] for _ in range(n+1)]
visited = [[] for _ in range(n+1)]
for _ in range(k):
    a, b= map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)

print(bfs(N,M,visited,graph))