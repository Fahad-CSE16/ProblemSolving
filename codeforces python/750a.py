n,k=map(int, input().split())
time= 240 -k
count = 0
while time >= ((count+1)*5) and count <n:
    time -= ((count+1)*5)
    count += 1

print(count)
