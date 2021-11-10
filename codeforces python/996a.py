t=int(input())
count = 0
while t > 0:
    if t >= 100:
        count+= int(t/100)
        t = t % 100
    elif t >= 20:
        count+= int(t/20)
        t = t % 20
    elif t >= 10:
        count+= int(t/10)
        t = t % 10
    elif t >= 5:
        count+= int(t/5)
        t = t % 5
    else:
        count+= int(t)
        t= 0
print(count)
    