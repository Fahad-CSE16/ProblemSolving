t=int(input())
for k in range(t):
    x,y = map(int, input().split())
    a,b = map(int, input().split())
    dif = abs(a-b)
    v=min(x,y)
    if not v < max(a,b) or not max(x,y) < max(a,b):
        if not v == dif or not min(a,b)==v:
            print("No")
        else:
            print("Yes")
    else:
        print("No")