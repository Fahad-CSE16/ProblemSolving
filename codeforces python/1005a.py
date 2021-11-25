n = int(input())

li = list(map(int, input().split()))
count = 1
newli = []
for i in range(1,n):
    if li[i]<li[i-1]:
        count +=1
        newli.append(li[i-1])
    if li[i]==li[i-1]:
        count +=1
        newli.append(li[i-1])
newli.append(li[-1])
print(count)
print(" ".join([str(x) for x in newli]))