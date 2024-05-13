def solution(clothes):
    answer = 1
    _dict = {}
    for i in range(len(clothes)):
        cloth = clothes[i][1]
        if cloth not in _dict.keys():
            _dict[cloth] = 1
        else:
            _dict[cloth] = _dict[cloth] + 1
        
    for cloth in _dict.keys():
        answer = answer * (_dict[cloth] + 1)
    
    answer = answer - 1
        
    
    return answer