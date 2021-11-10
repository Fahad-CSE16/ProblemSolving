n,m=map(int, input().split())
totalrow=0
totalcol=0
rowcount=0
colcount=0
from math import ceil

for i in range(1,n+1):
    mylist=list(input())
    if mylist.count("B") >0:
        rowcount+=i
        totalrow+=1
        for j in range(1,m+1):
            if mylist[j-1]=="B":
                colcount += j
                totalcol += 1
a =rowcount/totalrow
b =colcount/totalcol
print(ceil(a), ceil(b) )
