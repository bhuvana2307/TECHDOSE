def subarray_with_given_sum(arr, target_sum):
    n = len(arr)
    left = 0
    right = 0
    current_sum = 0

    while right < n:
        current_sum += arr[right]

        while current_sum > target_sum:
            current_sum -= arr[left]
            left += 1

        if current_sum == target_sum:
            return arr[left:right + 1]

        right += 1

    return None
