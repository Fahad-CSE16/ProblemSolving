li = list(map(int, input().split()))
li = sorted(li)
c = li[3]-li[2]
b = li[3]-li[1]
a = li[3]-li[0]
print(a, b, c)