a = []
for i in range(1, 10):
    num = int(input())
    a.append(num)
print(max(a))
print(a.index(max(a))+1)