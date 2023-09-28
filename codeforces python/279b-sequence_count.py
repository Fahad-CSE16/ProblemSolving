max_length, max_sum = map(int, input().split())
check_list = list(map(int, input().split()))

max_count = 0
current_sum = 0
first_added_index, index = 0, 0

while index < max_length:
    current_sum += check_list[index] # adding element
    while current_sum > max_sum:
        current_sum -= check_list[first_added_index] # removing first ever added element
        first_added_index += 1 # changing first ever added index
    max_count = max(max_count, (index + 1) - first_added_index )
    index += 1

print(max_count)
