def solution(a, b):
    answer = 0
    an = str(a) + str(b)
    an = int(an)
    
    answer = max(an, 2 * a * b)
    
    return answer