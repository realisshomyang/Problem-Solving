import sys
from collections import deque

input = sys.stdin.readline
dx = [-1,1,0,0,1,1,-1,-1]
dy = [0,0,-1,1,1,-1,-1,1]

while(True):
    a , b = map(int,input().split())

    if a == 0 and b == 0:
        break
    else:
        arr = []
        cnt = 0
        for i in range(b):
            arr.append(list(map(int,input().split())))
        visited = []
        for i in range(b):
            visited.append([])
            for j in range(a):
                visited[i].append(False)
        for i in range(b):
            for j in range(a):
                if arr[i][j] == 1 and not visited[i][j]:
                    q = deque()
                    q.append((i,j))
                    while(len(q)!=0):
                        cur = q.popleft()
                        for k in range(8):
                            nx = cur[0] + dx[k]
                            ny = cur[1] + dy[k]
                            if nx < 0 or ny < 0 or nx >= b or ny >= a:
                                continue
                            if arr[nx][ny] == 0 :
                                continue
                            elif visited[nx][ny] == True:
                                continue
                            else:
                                visited[nx][ny] = True
                                q.append((nx,ny))
                    cnt +=1
        print(cnt)
