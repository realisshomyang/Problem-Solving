def solution(targets):
    targets.sort(key = lambda x : x[1])
    answer = 0
    e = 0
    for target in targets:
        if e<=target[0]:
            answer +=1
            e = target[1]
    return answer