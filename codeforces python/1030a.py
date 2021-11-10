n=int(input())
opinions=list(map(int, input().split()))
if opinions.count(1):
    print("HARD")
else:
    print("EASY")
