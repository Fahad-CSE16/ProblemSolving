t = int(input())
for i in range(t):
    st = list(input())
    l = len(st)
    print(st[0], end="")
    for i in range(1,l-1,2):
        print(st[i], end="")
    print(st[l-1])
