n = int(input())
lst = [0]
for x in range(n):
    lst.append(int(input()))
dp = [0]
dp.append(lst[1])
if n > 1:
    dp.append(lst[1]+lst[2])
for x in range(3, n+1):
    dp.append(max(dp[x-1], lst[x]+dp[x-2], dp[x-3]+lst[x]+lst[x-1]))
print(dp[n])


#틀린 이유 -> 테스트케이스를 풀려고 억지로 풀음 경우를 