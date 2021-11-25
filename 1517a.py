t=int(input())
for i in range(t):
    n=int(input())
    count = 0
    while n >= 2050:
        s = str(n)
        if s.count("2050"):
            count +=1 
            n= n/2050
            print(count, n, "f")
        else:
            count +=1
            n = n - 2050
            print(count, n)

    print(count)

