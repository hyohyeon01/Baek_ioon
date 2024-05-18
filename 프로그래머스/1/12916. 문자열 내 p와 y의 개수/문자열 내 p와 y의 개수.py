def solution(s):
    answer = True
    
    a = 0
    b = 0
    
    for i in s:
        if(i == "p" or i == "P"):
            a += 1
        elif(i == "Y" or i == "y"):
            b += 1
    if(a == b):
        answer = True
    else:
        answer = False
    return answer