t=int(input())
for k in range(t):
    n=int(input())
    count = 0
    arr = []
    if n > 45:
        print("-1")
    else:
        for i in range(9,0,-1):
            val = count+ i
            if not val>n :
                arr.append(i)
                count +=i
        arr.sort()
        print("".join([str(i) for i in arr]))