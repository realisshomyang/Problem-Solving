lst = []
for i in range(9):
    lst.append(int(input()))

for i in range(9):
    for j in range(i+1, 9):
        tmp = sum(lst)-lst[i]-lst[j]
        if(tmp == 100):
            for k in range(len(lst)):
                if k == i or k == j :
                    continue
                else:
                    print(lst[k])
            break