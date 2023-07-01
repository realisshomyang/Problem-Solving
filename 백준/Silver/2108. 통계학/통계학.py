import sys
n = int(sys.stdin.readline())
lst = []
for _ in range(n):
    tmp = int(sys.stdin.readline())
    lst.append(tmp)

lst.sort()
dic = {}
for x in lst:
    if x not in dic:
        dic[x] = 1
    else:
        dic[x] +=1
    
sorted_dict = sorted(dic.items(), key = lambda item: item[1], reverse = True)

#산술평균
print(round(sum(lst)/n))
#중앙값
print(lst[n//2])
#최빈값
if(len(sorted_dict) == n):
    if(n==1):
        print(sorted_dict[0][0])
    else:
        print(sorted_dict[1][0])
else:
    if(sorted_dict[0][1] == sorted_dict[1][1]):
        print(sorted_dict[1][0])
    else:
        print(sorted_dict[0][0])
#범위
print(lst[-1] - lst[0])