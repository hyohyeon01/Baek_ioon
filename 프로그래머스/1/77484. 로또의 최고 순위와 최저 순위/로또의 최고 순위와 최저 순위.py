def solution(lottos, win_nums):
    answer = [0, 0]
    li = [6,6,5,4,3,2,1]
    a = 0 #최저 등수
    b = 0 #0의 개수
    c = 0 # 최고 등수
    
    for i in range(len(lottos)):
        for j in range(len(lottos)):
            if(lottos[i] == win_nums[j]):
                a += 1
        if(lottos[i] == 0):
            b += 1
    
    c = a + b
    
    answer[0] = li[c]
    answer[1] = li[a]
    
    return answer