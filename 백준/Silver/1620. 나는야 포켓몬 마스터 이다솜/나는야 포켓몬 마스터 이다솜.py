import sys

n, m = map(int, input().split())

d = {}
d2 = {}
lst = []
for i in range(1, n+1):
    tmp = sys.stdin.readline().rstrip()
    d[i] = tmp
    d2[tmp] = i


for i in range(m):
    tmp = sys.stdin.readline().strip()
    if (tmp.isdigit()):
        print(d.get(int(tmp)))
    else:
        print(d2.get(tmp))


# 사전자료형을 활용했어야했다. ㅣist의 index를 사용하면 n만큼 탐색해야함 
