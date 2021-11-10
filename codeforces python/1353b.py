t=int(input())
for i in range(0,t):
    n,k=map(int, input().split())
    a=list(map(int, input().split()))
    b=list(map(int, input().split()))
    a=sorted(a)
    b=sorted(b,reverse=True)
    sum=0
    for j in range(0,n):
        if j>=k:
            sum=sum+a[j]
        else:
            if a[j]<b[j]:
                sum=sum+b[j]
            else:
                sum=sum+a[j]
    print(sum)