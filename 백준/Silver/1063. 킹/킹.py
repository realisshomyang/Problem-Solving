# 1. 킹이랑 돌멩이 위치 8*8에 초기화
# 2. 입력 값 바탕으로 킹이랑 돌멩이 이동
# 이 때 나가는 경우 잘 고려하고, 나가는 경우면 패스
# 또 위치가 같아지는 경우에 대해 같으면 가는 방향 + 1
a, b, c = input().split()

locKing = (ord(a[0])-64, int(a[1]))
locRock = (ord(b[0])-64, int(b[1]))
for _ in range(int(c)):
    k = input()
    vec = (0, 0)
    if k == 'R':
        vec = (1, 0)
    elif k == 'L':
        vec = (-1, 0)
    elif k == 'T':
        vec = (0, 1)
    elif k == 'B':
        vec = (0, -1)
    elif k == 'RT':
        vec = (1, 1)
    elif k == 'LT':
        vec = (-1, 1)
    elif k == 'RB':
        vec = (1, -1)
    elif k == 'LB':
        vec = (-1, -1)

    tmpLocKing = (locKing[0] + vec[0], locKing[1] + vec[1])

    if tmpLocKing[0] < 1 or tmpLocKing[0] > 8 or tmpLocKing[1] < 1 or tmpLocKing[1] > 8:
        continue

    if locRock == tmpLocKing:
        if tmpLocKing[0] + vec[0] < 1 or tmpLocKing[0] + vec[0] > 8 or tmpLocKing[1]+vec[1] < 1 or tmpLocKing[1] + vec[1] > 8:
            continue
        else:
            locKing = tmpLocKing
            locRock = (locKing[0] + vec[0], locKing[1] + vec[1])
    else:
        locKing = tmpLocKing

print(chr(locKing[0]+64), end="")
print(locKing[1])
print(chr(locRock[0]+64), end="")
print(locRock[1])
