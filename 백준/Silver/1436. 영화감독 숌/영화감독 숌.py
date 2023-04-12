n = int(input())

cnt = 0
num = 0
while (cnt != n):
    num += 1
    tmp = str(num)
    sixcnt = 0
    if '666' in tmp:
        cnt += 1

print(num)
