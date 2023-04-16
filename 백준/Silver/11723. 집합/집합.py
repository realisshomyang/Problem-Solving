import sys

M = int(input())
s = set()
ans = []

for i in range(M):
    tmp = sys.stdin.readline().strip()
    if tmp[0:3] == "add":
        s.add(int(tmp[4:]))
    elif tmp[0:5] == "check":
        if (s.isdisjoint({int(tmp[6:])})):
            print(0)
        else:
            print(1)
    elif tmp[0:6] == "remove":
        s.discard(int(tmp[7:]))
    elif tmp[0:6] == "toggle":
        if (s.isdisjoint({int(tmp[7:])})):
            s.add(int(tmp[7:]))
        else:
            s.remove(int(tmp[7:]))
    elif tmp[0:3] == "all":
        s = set([i for i in range(1, 21)])
    elif tmp[0:5] == "empty":
        s = set()
