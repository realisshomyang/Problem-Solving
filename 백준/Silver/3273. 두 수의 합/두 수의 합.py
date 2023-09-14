import sys
from bisect import bisect

input = sys.stdin.readline

n = int(input())

lst = list(map(int,input().rstrip().split()))

target = int(input())

lst.sort()

cnt = 0

def binsearch(lst, x):
    left = 0 
    right = len(lst)-1
    while left<=right:
        mid = (left+right)//2
        if lst[mid] == x:
            return True
        elif lst[mid]>x:
            right = mid-1
        else :
            left = mid+1
    return False

for i in lst:
    if binsearch(lst,target-i):
        cnt +=1


print(int(cnt//2))
