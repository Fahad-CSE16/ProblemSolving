n=int(input())
for i in range(n):
    l,r=map(int, input().split())
    if l+l <= r:
        print(l, l+l)