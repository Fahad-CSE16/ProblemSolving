n,k=map(int, input().split())
i = 0
while i < k:
    if n%10 != 0:
        if n%10 >= (k-i):
            n = n -(k-i)
            i = i + (k-i)
        else:
            i = i + (n%10)
            n = n - (n%10)
    elif n%10 == 0:
        n = int(n/10)
        i = i+1
print(n)