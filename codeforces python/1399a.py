t = int(input())
def check(n,l):
    l= sorted(l)
    maxi = 0
    for i in range(n-1):
        maxi = max(maxi, l[i+1]-l[i])
        if maxi > 1:
            return False
    return True
for i in range(t):
    n = int(input())
    l = map(int, input().split())
    if n == 1:
        print("YES")
    else:
        if check(n,l):
            print("YES")
        else:
            print("NO")