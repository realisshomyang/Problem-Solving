import sys
n = int(input())
d = []
for i in range(0, n):
    tmp = sys.stdin.readline()
    a, b = tmp.split()
    d.append((int(a), b))

result = sorted(d, key=lambda a: (a[0]))
for i in result:
    print(i[0], i[1])
