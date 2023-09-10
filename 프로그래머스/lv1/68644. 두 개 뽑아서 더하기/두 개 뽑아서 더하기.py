def solution(numbers):
    answer = []
    for i in range(len(numbers)):
        for j in range(len(numbers)):
            if i != j :
                tmp = numbers[i]+ numbers[j];
                if tmp not in answer:
                    answer.append(tmp)
    answer = sorted(answer)
    return answer