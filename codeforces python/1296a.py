t = int(input())
for i in range(t):
    n = int(input())
    li = list(map(int, input().split()))
    neg = None
    pos = None
    for j in li:
        if neg and pos:
            break
        if j%2 == 0:
            pos = True
        else:
            neg = True
    if neg and pos:
        print("YES")
    elif neg and n%2 != 0:
        print("YES")
    elif neg and n%2 == 0:
        print("NO")
    elif pos and n%2 != 0:
        print("NO")
    elif pos and n%2 == 0:
        print("NO")
    elif not neg and not pos:
        print("NO")


