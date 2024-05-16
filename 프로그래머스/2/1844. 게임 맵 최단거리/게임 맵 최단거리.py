from collections import deque

def solution(maps):
    n = len(maps)  # Number of rows
    m = len(maps[0])  # Number of columns
    visited_map = [[False for _ in range(m)] for __ in range(n)]
    visited_map[0][0] = True
    moves = [[0, 1], [0, -1], [1, 0], [-1, 0]]
    current_xy_list = deque()
    current_xy_list.append((0, 0))
    answer = 1
    
    while current_xy_list:
        # Process all current nodes before moving to the next depth level
        next_moves = len(current_xy_list)
        answer += 1
        for _ in range(next_moves):
            current_xy = current_xy_list.popleft()

            for move in moves:
                next_xy = (current_xy[0] + move[0], current_xy[1] + move[1])

                if next_xy == (n-1, m-1):  # Check if reached end point
                    return answer

                # Ensure the next position is within bounds and is not visited
                if (0 <= next_xy[0] < n and 0 <= next_xy[1] < m and 
                    not visited_map[next_xy[0]][next_xy[1]] and 
                    maps[next_xy[0]][next_xy[1]] == 1):
                    visited_map[next_xy[0]][next_xy[1]] = True
                    current_xy_list.append(next_xy)

        

    return -1 if not visited_map[n-1][m-1] else answer
