import sys

while (True):
    lst = []
    a, b, c = map(int, sys.stdin.readline().split())
    if (a == 0 and b == 0 and c == 0):
        break
    lst.append(a**2)
    lst.append(b**2)
    lst.append(c**2)
    lst.sort()
    if (lst[0]+lst[1] == lst[2]):
        print("right")
    else:
        print("wrong")
