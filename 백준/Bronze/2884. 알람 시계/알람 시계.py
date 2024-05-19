hour, mi = map(int, input().split())

if(mi >= 45):
    print("%d %d"%(hour, mi-45))
else:
    print("%d %d"%((hour-1)%24, mi + 15))