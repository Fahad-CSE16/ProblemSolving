n = int(input())
import math
if n%2 != 0:
    num = int(n/2)
    print(num)
    for i in range(num-1):
        print(2, end=" ")
    print(3)
else:
    num = math.ceil(n/2)
    print(num)
    for i in range(num):
        print(2, end=" ")