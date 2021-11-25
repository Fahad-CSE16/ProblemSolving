n=int(input())
li = sorted(list(map(int, input().split())))
context= {}
for i in li:
    if i in context:
        context[i] +=1
    else:
        context[i] = 1
print(context)
iterat = iter(context)
fkey = next(iterat)
dp = {}
dp[0] = 0
dp[1] = context[fkey]*fkey
i = 2
pkey = 0
nkey = 0
for key in iter(context):
    if key != fkey:
        current_data = context[key]*key
        next_data = context.get(key+1, 0)*key+1
        dp[i] = max(current_data, next_data+dp[i-1])
        # if key-1 != pkey:
        #     pass
        # pdata = context.get(key-1, 0)*key-1
        # if pdata != -1:
        #     dp[i] += pdata
        i+=1
    # pkey = key
    # try:
    #     nkey = next(iterat)
    # except:
    #     nkey = None
print(dp)
print(list(dp.values())[-1])


    