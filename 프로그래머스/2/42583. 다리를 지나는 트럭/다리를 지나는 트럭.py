from collections import deque
def solution(bridge_length, weight, truck_weights):
    answer = 0
    truck_table = {}
    
    for i in range(len(truck_weights)):
        truck_table[i] = 0
    
    bridge_queue = deque()
    bridge_queue.append(0)
    cnt = 1
    index = 1
    current_weight = truck_weights[0]
    while bridge_queue:
        for truck_index in bridge_queue:
            truck_table[truck_index] += 1    
        
        if truck_table[bridge_queue[0]] >= bridge_length + 1 :
            current_weight -= truck_weights[bridge_queue.popleft()]
            
            
        if len(bridge_queue) < bridge_length and index < len(truck_weights) and  current_weight + truck_weights[index] <= weight:
            bridge_queue.append(index)
            truck_table[index] = 1
            current_weight += truck_weights[index]
            index += 1
        
        if len(bridge_queue) == 0:
            break
        
        cnt += 1
    answer = cnt
    return answer
