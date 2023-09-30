import sys
from collections import deque
input = sys.stdin.readline

def bfs(visited, graph, smell):
    q = deque()
    q.append([1,0])
    visited[1] = True
    while len(q) != 0:
        cur = q.popleft()
        for i in graph[cur[0]]:
            if visited[i] == True:
                continue
            visited[i] = True
            smell[i] = cur[1]+1
            q.append([i,cur[1]+1])


N, M = map(int, input().split())
graph = [[] for _ in range(N+1)]
visited = [0]*(N+1)
smell = [0]*(N+1)
for _ in range(M):
    a, b = map(int , input().split())
    graph[a].append(b)
    graph[b].append(a)

bfs(visited,graph,smell)

max_ans = max(smell)
max_index = smell.index(max_ans)
ans_cnt = smell.count(max_ans)

print(max_index, max_ans , ans_cnt)