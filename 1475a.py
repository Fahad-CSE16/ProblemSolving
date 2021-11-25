t = int(input())
import math
def check(n):
    j = 3
    while j <= math.sqrt(n):
        if n%j == 0:
            return True
        j = j+2
    return False
for i in range(t):
    n = int(input())
    if n<3:
        print("NO")
    elif n%2!=0:
        print("YES")
    elif check(n):
        print("YES")
    else:
        print("NO")