n, a, b, c=map(int, input().split())
count = 0
my = [a,b,c]
my = sorted(list(my))

if n % my[0] == 0:
    count= count + int(n/my[0])
    n= n/my[0]
if n % my[1] == 0:
    count= count + int(n/my[1])
    n= n/my[1]
if n % my[2] == 0:
    count= count + int(n/my[2])
    n= n/my[2]
l = len(my)
for i in range(l):
    if n % my[i] != 0 and i+1 < l:
        count= count + int(n/my[i]) 
        n = n%my[i] 
        if n < my[i+1]:
            count= count - int(my[i+1]/my[i])
            n = n + int(my[i+1]/my[i])*my[i]
print(count)