def solution(a, b):
    answer = 0
    a = str(a)
    b = str(b)
    
    an = a + b
    bn = b + a
    
    answer = int(max(an, bn))
    
    return answer