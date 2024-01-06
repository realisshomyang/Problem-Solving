lst = []
for i in range(28):
    lst.append(int(input()))

lst.sort()

for i in range(1, 31):
    if i not in lst:
        print(i)
