def solution(num_list):
    answer = []
    answer = num_list
    if(num_list[len(num_list) - 1] > num_list[len(num_list) - 2]):
        answer.append(num_list[len(num_list) - 1] - num_list[len(num_list) - 2])
    elif(num_list[len(num_list) - 1] <= num_list[len(num_list) - 2]):
        answer.append(num_list[len(num_list) - 1] * 2)
    return answer