import sys
M, N = map(int, input().split())
ans = []
d = {}

for i in range(M):
    tmp = sys.stdin.readline().rstrip()
    d[tmp] = 0

for i in range(N):
    tmp = sys.stdin.readline().rstrip()
    if tmp in d:
        ans.append(tmp)

print(len(ans))
ans.sort()
for i in ans:
    print(i)
