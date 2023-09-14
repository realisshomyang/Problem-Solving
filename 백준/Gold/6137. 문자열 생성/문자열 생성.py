import sys

input = sys.stdin.readline

n = int(input())
lst = []
for _ in range(n):
    tmp = input().rstrip()
    lst.append(tmp)

i = 0
j = n-1
ans =[]
while(i<j):
    if lst[i] < lst[j] :
        ans.append(lst[i])
        i+=1
    elif lst[i] > lst[j] :
        ans.append(lst[j])
        j-=1
    elif lst[i] == lst[j] :
        tmpi = i
        tmpj = j
        while(tmpi<=tmpj):
            tmpi +=1
            tmpj -=1
            if(lst[tmpi] > lst[tmpj]):
                ans.append(lst[j])
                j -= 1
                break
            elif(lst[tmpj] > lst[tmpi]):
                ans.append(lst[i])
                i += 1
                break
        if(lst[tmpi] == lst[tmpj]):
            ans.append(lst[i])
            i  += 1

if(i == j):
    ans.append(lst[i])

for i in range(len(ans)):
    if(i%80 == 0):
        if(i == 0):
            print(ans[i], end ="")
        else:
            print()
            print(ans[i],end="")
    else:
        print(ans[i], end ="")