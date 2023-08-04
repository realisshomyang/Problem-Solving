import sys
input = sys.stdin.readline

n = int(input())
lst = []
for _ in range(n):
    tmp = int(input())
    lst.append(tmp)

lst.sort(reverse=True)

ans = 0
for i in range(1,n+1):
    tmp = lst[i-1] - (i-1)
    if(tmp <= 0):
        tmp = 0
    ans = ans + tmp

print(ans)