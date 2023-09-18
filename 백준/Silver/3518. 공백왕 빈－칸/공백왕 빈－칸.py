import sys
arr =[]
max_len = 0
input = sys.stdin.readline
max_arr = []
while True :
    try:
        str = input().rstrip('\n')
        if not str:
            break
        tmp = list(str.split())
        for i in range(len(tmp)):
            if len(max_arr)<i+1:
                max_arr.append(len(tmp[i]))
            else:
                if max_arr[i]<len(tmp[i]):
                    max_arr[i]=len(tmp[i])
        arr.append(tmp)
    except:
        break

for i in range(len(arr)):
    res = ""
    for j in range(len(arr[i])):
        res += arr[i][j]+" "*(max_arr[j]-len(arr[i][j]))
        res += " "
    print(res.rstrip())
