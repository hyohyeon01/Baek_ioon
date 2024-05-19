re = int(input())
num = int(input())

ch = 0

for i in range(num):
    a, b = map(int, input().split())
    ch += a * b

if(re == ch):
    print("Yes")

else:
    print("No")