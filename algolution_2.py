# -*- coding: utf-8 -*-
"""algolution-2.ipynb

Automatically generated by Colab.

Original file is located at
    https://colab.research.google.com/drive/1NzwA1rBWfYKhFvX9ZkqZU0e3S6TVmu0C
"""

def maxSubarraySum(arr):
    res = arr[0]
    for i in range(len(arr)):
        currSum = 0
        for j in range(i, len(arr)):
            currSum = currSum + arr[j]
            res = max(res, currSum)
    return res
'''
if __name__ == "__main__":
    arr = [2, 3, -8, 7, -1, 2, 3]
    print(maxSubarraySum(arr))
'''
arr = [2, 3, -8, 7, -1, 2, 3]
print(maxSubarraySum(arr))

------------------------------------------------------------------------

def count_inversion(arr):
    n, c = len(arr), 0
    for i in range(n):
        for j in range(i+1, n):
            if arr[i] > arr[j] and i<j:
                c += 1
    return c

arr = [7, 2, 6, 3]
print(count_inversion(arr))

------------------------------------------------------------------------

def k_largest(arr):
    k = 2
    num = []
    for i in range(len(arr)):
        m = max(arr)
        num.append(m)
        arr.remove(m)
    return num[k-1]

arr = [3, 2, 1, 5, 6, 4]
print(k_largest(arr))

------------------------------------------------------------------------

def is_palindrome(s: str) -> bool:
    cleaned_string = ''.join(char.lower() for char in s if char.isalnum())
    return cleaned_string == cleaned_string[::-1]


s1 = "A man, a plan, a canal: Panama"
print(is_palindrome(s1))

------------------------------------------------------------------------

def find_equilibrium_index(arr):
    total_sum = sum(arr)
    left_sum = 0

    for i, num in enumerate(arr):
        total_sum -= num
        
        if left_sum == total_sum:
            return i + 1  
        
        left_sum += num 

    return -1


arr = [-7, 1, 5, 2, -4, 3, 0]
print(find_equilibrium_index(arr)) 

------------------------------------------------------------------------
#naive
def find_pair_naive(A, N, X):
    for i in range(N):
        for j in range(i + 1, N):
            if A[i] + A[j] == X:
                return "Yes"
    return "No"


A = [1, 2, 4, 5, 7, 11]
N = 6
X = 9
print(find_pair_naive(A, N, X))

#two pointers
def find_pair_two_pointer(A, N, X):
    left = 0
    right = N - 1

    while left < right:
        current_sum = A[left] + A[right]
        if current_sum == X:
            return "Yes"
        elif current_sum < X:
            left += 1 
        else:
            right -= 1 

    return "No"


A = [1, 2, 4, 5, 7, 11]
N = 6
X = 9
print(find_pair_two_pointer(A, N, X))  # Output: Yes


------------------------------------------------------------------------

def max_sum_k_consecutive(arr, n, k):
    if n < k:
        return "Invalid"
    max_sum = sum(arr[:k])
    current_sum = max_sum
    for i in range(k, n):
        current_sum += arr[i] - arr[i - k]
        max_sum = max(max_sum, current_sum)

    return max_sum


arr1 = [100, 200, 300, 400]
k1 = 2
print(max_sum_k_consecutive(arr1, len(arr1), k1))  

------------------------------------------------------------------------

def max_profit(prices):
    if not prices:  
        return 0

    min_price = float('inf')  
    max_profit = 0 
    for price in prices:
        if price < min_price:
            min_price = price
        current_profit = price - min_price
        if current_profit > max_profit:
            max_profit = current_profit

    return max_profit


prices = [7, 1, 5, 3, 6, 4]
print(max_profit(prices))

------------------------------------------------------------------------
