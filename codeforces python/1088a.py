n=int(input())
def check(t):
    for i in range(t, 1, -1):
        for j in range(1, i+1):
            if (i%j) == 0 and (i*j) > t and (i/j) <t:
                return i,j
    return None,None
a , b = check(n)
if a and b:
    print(a,b)
else:
    print(-1)