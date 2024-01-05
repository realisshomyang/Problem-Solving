"""
n * n 격자 위에서 이루어지는 지뢰찾기 
m개의 지뢰가 각각 서로 다른 격자 위에 숨겨져 있음. 
지뢰가 없는 곳을 건드리면 상하좌위대각선에 인접한 8개 칸의 지뢰가 몇 개인지 가르쳐주는 숫자 나타낸다. 
-> 할일 (일부가 플레이된 게임의 정보를 읽어 해당하는 격자를 출력하는 것임)
----
입력 : 10보다 작거나 같은 양의 정수 n이 입력됨.

다음 n개의 줄은 지뢰의 위치를 나타낸다. 
.은 지뢰가 없는 지점. *은 지뢰가 있는 지점
또 다음 N개의 줄은 이미 열린 칸 x , 열리지 않은 칸 .으로 표시 
----
출력 : 위치가 정확하게 채워진 판을 표현해야한다. 지뢰가 없으면서 열린 칸에는 0과 8 사이의 숫자 표시, 지뢰가 있는 칸이 열렸다면 지뢰가 있는 모든 칸이 별표로 표시 
-> 두 번째 출력에서 x로 되어있는 것을 대체한다. 
+ 지뢰 열리면 지뢰를 표시한다. 
1. check 지뢰 여부 
2. and 숫자 표시를 하자. 
"""
n = int(input())
mine = []
image = []
# 지뢰 있는 부분
for _ in range(n):
    mine.append(list(input()))
# Image 부분
for _ in range(n):
    image.append(list(input()))

for i in range(n):
    for j in range(n):
        if image[i][j] == 'x':
            if mine[i][j] == '*':
                for k in range(n):
                    for l in range(n):
                        if mine[k][l] == '*':
                            image[k][l] = '*'
            else:
                cnt = 0
                for k in range(i-1, i+2):
                    for l in range(j-1, j+2):
                        if k < 0 or k >= n or l < 0 or l >= n:
                            continue
                        if k == i and l == j:
                            continue
                        if mine[k][l] == '*':
                            cnt += 1
                image[i][j] = cnt

for i in range(n):
    for j in range(n):
        print(image[i][j], end="")
    print()
