import sys

input = sys.stdin.readline

n,m = map(int,input().split())
lst = list(map(int, input().split()))

for i in range(1,n):
    lst[i] += lst[i-1]

lst = [0] + lst
for i in range(m):
    a , b = map(int, input().split())
    print(lst[b] - lst[a-1])