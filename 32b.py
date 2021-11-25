s= input()
l = s.split(".")
l = [x.count("-") for x in l]
for i in range(len(l)):
    while l[i] > 2:
        print("2",end='')
        l[i]-=2
    if i>0 and l[i-1] > 2:
        pass
    else:
        print(l[i],  end='')