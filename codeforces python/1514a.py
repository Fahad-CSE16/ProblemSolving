t = int(input())
import math

def check(mylist, size):
    for i in range(size):
        root = math.sqrt(mylist[i])
        if int(root + 0.5) ** 2 != mylist[i]:
            return True
for i in range(t):
    size = int(input())
    mylist = list(map(int, input().split()))
    if check(mylist, size):
        print("YES")
    else:
        print("NO")
    

