t=int(input())
for i in range(0,t):
    n=int(input())
    a=list(map(int, input().split()))
    # setss = set(a)
    # print(setss)
    # listss=list(setss)
    listss=sorted(a)
    diff=listss[-1]
    for i in range(0,len(listss)-1):
        if abs(listss[i]-listss[i+1])<diff:
            diff=abs(listss[i]-listss[i+1])
    print(diff)