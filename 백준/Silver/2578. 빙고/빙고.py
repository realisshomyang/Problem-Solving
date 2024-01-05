"""
입력 : 5 x 5 빙고판을 준다.
+ 5 x 5 사회자가 부르는 것을 준다.
출력 : 몇 번째 수를 부른 후 빙고를 외치게 되는지 출력한다.
조건 : 1~25 사이의 숫자만 있다. 
"""


def check(lst):
    cnt = 0
    for i in range(5):
        for j in range(5):
            if lst[i][j] != 0:
                break
            else:
                if j == 4:
                    cnt += 1
    for i in range(5):
        for j in range(5):
            if lst[j][i] != 0:
                break
            else:
                if j == 4:
                    cnt += 1
    for i in range(5):
        if lst[i][i] != 0:
            break
        else:
            if i == 4:
                cnt += 1
    for i in range(5):
        if lst[i][4-i] != 0:
            break
        else:
            if i == 4:
                cnt += 1
    return cnt


def find(lst, num):
    for i in range(5):
        for j in range(5):
            if lst[i][j] == num:
                return (i, j)


def sol():
    bingo = []
    call = []
    for _ in range(5):
        bingo.append(list(map(int, input().split())))
    for _ in range(5):
        call.append(list(map(int, input().split())))
    ans = 0
    for i in range(5):
        for j in range(5):
            ans += 1
            a, b = find(bingo, call[i][j])
            bingo[a][b] = 0
            if (check(bingo) >= 3):
                return ans


print(sol())
