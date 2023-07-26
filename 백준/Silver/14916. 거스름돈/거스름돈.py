n = int(input())
cnt = 0
while(True):
    if(n%5 == 0):
        cnt += n/5
        print(int(cnt))
        break
    elif(n<0):
        print(-1)
        break
    else:
        n = n-2
        cnt+=1
    