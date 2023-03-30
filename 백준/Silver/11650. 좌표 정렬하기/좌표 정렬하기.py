import sys
n = int(input())
lst = []
for i in range(n):
    tmp = list(map(int, sys.stdin.readline().split()))
    lst.append(tmp)

lst.sort(key=lambda x: (x[0], x[1]))


for x in lst:
    print(x[0], x[1])
