n=int(input())
li = sorted(list(map(int, input().split())))
context= {}
for i in li:
    if i in context:
        context[i] +=1
    else:
        context[i] = 1
# print(context)
iterat= iter(context)
fkey= next(iterat)
dp= {}
dp[0]=0
dp[1] = context[fkey]*fkey
i = 2
for key in context:
    if key != fkey:
        dp[i]=max(dp[i-1],dp[i-2]+key*context[key])
        if not context.get(key-1):
            dp[i] += dp[i-1]
        i+=1
# print(dp)
print(list(dp.values())[-1])