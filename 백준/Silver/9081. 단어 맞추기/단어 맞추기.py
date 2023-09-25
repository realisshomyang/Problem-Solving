import sys


def next_permutation(s):
    k = -1
    for i in range(len(s) - 1):
        if s[i] < s[i + 1]:
            k = i
    if k == -1:
        return False
    for i in range(len(s) - 1, -1, -1):
        if s[k] < s[i]:
            m = i
            break
    s[k], s[m] = s[m], s[k]
    L = s[:k + 1]
    L.extend(list(reversed(s[k + 1:])))
    return L


t = int(sys.stdin.readline())
for _ in range(t):
    n = input().rstrip()
    answer = next_permutation(list(n))
    if answer:
        print(''.join(answer))
    else:
        print(n)