n,l=map(int, input().split())
a=list(map(int, input().split()))
a=sorted(a)
if a[0]!=0:
    maxi = (a[0]-0)*2
else:
    maxi = 0

for i in range(1,n):
    maxi= max((a[i]-a[i-1]), maxi)

if a[-1] != l and ((l - a[-1])*2) >= maxi:
    maxi = (l - a[-1])*2

print(maxi/2)

