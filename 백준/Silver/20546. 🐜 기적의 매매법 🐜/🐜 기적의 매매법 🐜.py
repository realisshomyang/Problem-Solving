"""
준현 -> 한번 산 주식은 절대 팔지 않음. 
성민 -> 타이밍싸움임. 
"""
import sys
input = sys.stdin.readline
money = int(input())
stock = list(map(int, input().split()))

# 현금 관련 변수
j_money = money
s_money = money
# 보유 주식 관련 변수
j_stock = 0
s_stock = 0

for i in stock:
    if j_money >= i:
        buy = j_money // i
        j_stock = j_stock + (buy)
        j_money = j_money - (i * buy)

flag = 0
for i in range(1, len(stock)):
    # 전날 보다 오늘이 크면 -> 상승 생각
    # 3일째 상승시, 전량 매도(주식)
    if stock[i] > stock[i-1]:
        if flag <= 0:
            flag = 1
        else:
            flag = flag + 1
        if flag >= 3:
            s_money = s_money + (stock[i] * s_stock)
            s_stock = 0
    # 전날 보다 오늘이 작으면 -> 하락 생각
    # 3일째 하락시, 전량 매수(주식))
    elif stock[i] < stock[i-1]:
        if flag >= 0:
            flag = -1
        else:
            flag = flag - 1

        if flag <= -3:
            buy = (s_money // stock[i])
            s_stock = s_stock + buy
            s_money = s_money - (stock[i] * buy)

    elif stock[i] == stock[i-1]:
        flag = 0

j_result = stock[-1] * j_stock + j_money
s_result = stock[-1] * s_stock + s_money

if j_result > s_result:
    print("BNP")
elif j_result < s_result:
    print("TIMING")
else:
    print("SAMESAME")
