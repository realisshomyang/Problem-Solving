import sys
input = sys.stdin.readline
n, k = map(int, input().split())
arr = [int(input()) for _ in range(n)]


left = 1
right = max(arr)
ans = 0

while(left <= right):
    mid = (left+right)//2;
    cnt = 0
    for i in arr:
        cnt = cnt + (i//mid)
    if(cnt >= k):
        left = mid+1
        ans = max(ans,mid)
    else:
        right = mid -1

print(ans)