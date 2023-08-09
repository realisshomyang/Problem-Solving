n = int(input())
lst = list(map(int,input().split()))
lst = sorted(lst,reverse=True)

ans = lst[0]
for i in range(1, n):
    ans = ans + (lst[i]/2)

print(ans)