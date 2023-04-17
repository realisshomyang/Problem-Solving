import sys
from collections import deque
d = deque([])
while (True):
    flag = 0
    tmp = sys.stdin.readline().rstrip()
    if (tmp == "."):
        break
    else:
        for x in tmp:
            if x == "[":
                d.appendleft(x)
            elif x == "(":
                d.appendleft(x)
            elif x == "]":
                if len(d) == 0:
                    print("no")
                    break
                else:
                    if (d[0] == "["):
                        d.popleft()
                    else:
                        print("no")
                        break
            elif x == ")":
                if len(d) == 0:
                    print("no")
                    break
                else:
                    if (d[0] == "("):
                        d.popleft()
                    else:
                        print("no")
                        break
            elif x == ".":
                if (len(d) == 0):
                    print("yes")
                else:
                    print("no")
        d.clear()
