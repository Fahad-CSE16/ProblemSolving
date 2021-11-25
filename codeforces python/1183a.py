n = int(input())
# d = [int(x) for x in str(n)]
count = 0
for x in str(n):
    count += int(x)
while (count%4)!=0:
    n += 1
    count = 0
    for x in str(n):
        count += int(x)
print(n)