n=int(input())
xcount = 0
ycount = 0
for i in range(n):
    x, y= map(int, input().split())
    if x < 0:
        xcount += 1
    else :
        ycount += 1
if xcount >1 and ycount >1:
    print("No")

else:
    print("Yes")
