import sys
from collections import deque


input = sys.stdin.readline

n = int(input())

def ispal(s):
    i = 0
    j = len(s)-1
    while(i<j):
        if s[i] == s[j] :
            i +=1
            j -=1
        elif s[i]!=s[j] :
            return False
    return True


for k in range(n):
    issimpal = False
    ispall = True
    s = list(input().strip())

    i = 0
    j = len(s)-1
    while(i<j):
        if s[i] == s[j] :
            i +=1
            j -=1

        elif s[i] != s[j]:
            ispall = False
            tmp = s[0:i] + s[i+1:len(s)]
            tmp2 = s[0:j] + s[j+1:len(s)]
            if(ispal(tmp) or ispal(tmp2)):
                issimpal = True
                break
            else:
                issimpal = False
                break
    if(ispall):
        print(0)
    elif(not ispall and issimpal):
        print(1)
    elif(not issimpal):
        print(2)