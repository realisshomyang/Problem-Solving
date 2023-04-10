import sys
d = {}
n1 = int(input())
s = sys.stdin.readline()
lst = list(s.split())
n2 = int(input())
k = sys.stdin.readline()
lst2 = list(k.split())

for x in lst:
    if (x in d):
        d[x] = d[x]+1
    else:
        d[x] = 1

for x in lst2:
    if (x in d):
        print(d.get(x), end=" ")
    else:
        print(0, end=" ")
