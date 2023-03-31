import sys
lst = []
n = int(input())

for i in range(n):
    tmp = sys.stdin.readline().strip()
    lst.append(tmp)

lst = list(set(lst))
lst.sort()
lst.sort(key=lambda x: (len(x), x[0]))

for x in lst:
    print(x)
