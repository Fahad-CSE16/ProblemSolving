n,k=map(int, input().split())
# x=k
# i=2
# while x <= n:
#     x=k*i
#     i+=1
# print(x)

# x=n+1
# while x%k != 0 :
#     x+=1
# print(x)

x= n+1
while x%k != 0 :
    x+=k-(x%k)
print(x)

