def solution(n, lost, reserve):
    answer = 0
    inter =  set(lost).intersection(set(reserve))
    lost =list(set(lost)-inter)
    reserve = list(set(reserve)-inter)
    print(lost,reserve)    
    copy_lost = lost.copy()
    
    for i in range(0,len(copy_lost)):
        if copy_lost[i]-1 in reserve :
            lost.remove(copy_lost[i])
            reserve.remove(copy_lost[i]-1)
        elif copy_lost[i]+1 in reserve :
            lost.remove(copy_lost[i])
            reserve.remove(copy_lost[i]+1)
    answer = n - len(lost)
    return answer