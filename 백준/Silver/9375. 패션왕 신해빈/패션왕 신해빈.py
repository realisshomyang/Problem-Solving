
# 옷의 종류 별로 분류
# 가짓수 계산

T = int(input())

for _ in range(T):
    n = int(input())
    dic = {}
    for _ in range(n):
        c, t = input().split()
        if t not in dic:
            dic[t] = 1
        else:
            dic[t] += 1
    ans = 1
    for x in dic:
        ans = ans * (dic[x]+1)

    print(ans-1)
