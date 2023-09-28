shops = int(input())
prices = list(map(int, input().split()))
prices.sort()

days = int(input())
for _ in range(days):
    money = int(input())
    def binary_search(money):
        left, right = 0, len(prices) - 1
        while left <= right:
            mid = (left + right) // 2
            if prices[mid] <= money:
                print("Will be on right side----------", prices[mid])
                left = mid + 1
            else:
                print("Will be on left side----------", prices[mid])
                right = mid - 1
        return left
    count = binary_search(money)
    print(count)
