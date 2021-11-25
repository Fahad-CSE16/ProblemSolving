t = int(input())
for i in range(t):
    n = int(input())
    st = input()
    ind = None
    for j in range(n, 0, -1):
        if st[j-1] != ")":
            ind = j
            break
    if ind:
        if n%2==0:
            if ind >= int(n/2):
                print("No")
            else:
                print("Yes")
        else:
            if ind >= int(n/2)+1:
                print("No")
            else:
                print("Yes")
    else:
        print("Yes")
        

