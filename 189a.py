n, a, b, c=map(int, input().split())
my = [a,b,c]
my = sorted(my)
count = 0
a,b,c= map(int, my)
if n%a ==0:
    count+=(n/a)
else:
    count += (n/a)
    val= n
    for i in range(n/b):
        count -= i
        
        
print(count)