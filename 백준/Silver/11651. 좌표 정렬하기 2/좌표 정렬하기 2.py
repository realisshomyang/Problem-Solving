import sys
input = sys.stdin.readline

n = int(input())

lst = []
for i in range(n):
    lst.append(list(map(int,input().split())))
lst.sort(key = lambda x :(x[1], x[0]))

for x in lst:
    print(x[0] , end=" ")
    print(x[1])