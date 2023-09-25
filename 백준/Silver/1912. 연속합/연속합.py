n = int(input())
arr = list(map(int, input().split()))
dp = [0]*(n+1)
dp[0] = arr[0]
ans = dp[0]

for i in range(1,n):
    dp[i] = max(dp[i-1] + arr[i] , arr[i])
    ans = max(dp[i],ans)

print(ans)