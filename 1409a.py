t = int(input())
for i in range(t):
    a,b = map(int, input().split())
    dif = abs(a-b)
    if (dif%10) == 0:
        print(int(dif/10))
    else:
        print(int(dif/10)+1)