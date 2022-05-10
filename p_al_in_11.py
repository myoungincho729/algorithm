#leetcode 238. product of array except self
def pro(nums):
    p = 1
    out = []
    for i in range(len(nums)):
        out.append(p)
        p = p*nums[i]
    p = 1
    for j in range(len(nums)-1, -1,-1):
        out[j] = out[j]*p
        p = p*nums[j]
    return out

print(pro([1,2,3,4]))
        