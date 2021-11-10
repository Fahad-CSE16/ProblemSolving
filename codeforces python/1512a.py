n = int(input())
for i in range(n):
    l = int(input())
    a=list(map(int, input().split()))
    for i in range(l):
        if a.count(a[i])== 1:
            print(i+1)
    
