import sys

input = sys.stdin.readline

n = int(input())
conferences = []
for x in range(n):
    lst = list(map(int,input().split()))
    conferences.append(lst)


conferences = sorted(conferences, key = lambda x : (x[1] , x[0]))

cnt = 1
end_time = conferences[0][1]

for i in range(1,n):
     if conferences[i][0] >= end_time:
        cnt += 1
        end_time = conferences[i][1]

print(cnt)