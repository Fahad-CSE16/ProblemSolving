n = int(input())
a=set(map(int, input().split()))
a=list(a)
a=sorted(a)
if len(a)>1:
    print(a[1])
else:
    print("NO")