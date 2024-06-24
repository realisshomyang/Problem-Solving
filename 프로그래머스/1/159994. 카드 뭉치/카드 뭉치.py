def solution(cards1, cards2, goal):
    answer = ''
    cards1 = cards1[::-1]
    cards2 = cards2[::-1]
    goal = goal[::-1]
    while True :
        if (len(goal) == 0):
            break
        if (len(cards1) == 0):
            tmp_card1 = 0
        else:
            tmp_card1 = cards1.pop()
        
        if (len(cards2) == 0):
            tmp_card2 = 0
        else:
            tmp_card2 = cards2.pop()
        
        tmp_goal = goal.pop()
        if tmp_card1 == tmp_goal :
            cards2.append(tmp_card2)
            continue
        if tmp_card2 == tmp_goal :
            cards1.append(tmp_card1)
            continue
        
        if tmp_card2 != tmp_goal and tmp_card1 != tmp_goal :
            return "No"
    
    return "Yes"