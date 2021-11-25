n = int(input())

li = list(map(int, input().split()))
newli= li
newli.append(li[0])
mini = 999
for i in range(n):
    mini = min(abs(newli[i+1]-newli[i]), mini)
for i in range(n):
    if abs(newli[i+1]-newli[i])== mini:
        if i+1 != n:
            print(i+1, i+2)
            break
        else:
            print(i+1, 1)
            break
