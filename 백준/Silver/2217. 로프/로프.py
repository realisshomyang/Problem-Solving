import sys
input = sys.stdin.readline

n = int(input())
lst = []
for _ in range(n):
    tmp = int(input())
    lst.append(tmp)

lst = sorted(lst)
ans = 0
for i in range(n):
    ans = max(ans,((lst[i])*(n-i)))

print(ans)