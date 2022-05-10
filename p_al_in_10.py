#leetcode 561. Array Partition 1
def arrayPairSum(nums):
    nums.sort()
    ans = 0
    for i in range(len(nums)):
        if i%2==0:
            ans += nums[i]
    return ans
    
def arrayPairSum2(nums):
    return sum(sorted(nums)[::2])