def solution(friends, gifts):
    answer = 0
    
    gift_dict = {}
    friend_dict = {}
    
    for friend in friends:
        gift_dict[friend] = [0,0]
        friend_dict[friend] = {}
    
    for friend1 in friends:
        for friend2 in friends:
            friend_dict[friend1][friend2] = 0
    
    for gift in gifts:
        name = gift.split(' ')
        # 주는 사람 + 1
        gift_dict[name[0]][0] += 1
        # 받는 사람 + 1
        gift_dict[name[1]][1] += 1
        
        friend_dict[name[0]][name[1]] += 1
    
    gift_point_dict = {}
    
    for friend in friends:
        gift_point_dict[friend] = gift_dict[friend][0] - gift_dict[friend][1]
    
    next_month_point = {}
    for friend in friends:
        next_month_point[friend] = 0
    
    for friend1 in friends:
        for friend2 in friends:
            
            if friend1 == friend2:
                continue
            
            if friend_dict[friend1][friend2] > friend_dict[friend2][friend1]:
                next_month_point[friend1] += 1
            elif friend_dict[friend1][friend2] < friend_dict[friend2][friend1]:
                next_month_point[friend2] += 1
            else:
                if gift_point_dict[friend1] > gift_point_dict[friend2] :
                    next_month_point[friend1] += 1
                elif gift_point_dict[friend1] < gift_point_dict[friend2] :
                    next_month_point[friend2] += 1
    
    answer = max(next_month_point.values())/2

    
    
    return answer