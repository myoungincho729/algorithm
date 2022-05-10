#덧셈하여 타겟을 만들 수 있는 배열의 두 숫자 인덱스를 리턴하라.
nums = [2,7,11,15]
target = 9
# 출력 : [0,1]

#1 brute-force
def twoSum1(nums, target):
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            if nums[i] + nums[j] == target:
                return [i,j]

#2 in을 이용한 탐색
def twoSum2(nums, target):
    for i, n in enumerate(nums):
        complement = target - n
        
        if complement in nums[i+1:]:
            return [nums.index(n), nums[i+1:].index(complement)+i+1]

#3 첫 번째 수를 뺀 결과 키 조회
def twoSum3(nums, target):
    nums_map = {}
    for i, num in enumerate(nums):
        nums_map[num] = i
    
    for i, num in enumerate(nums):
        if target-num in nums_map and i != nums_map[target-num]:
            return nums.index(num), nums_map[target-num]

#4 조회 구조 개선
def twoSum4(nums, target):
    nums_map = {}
    for i, num in enumerate(nums):
        if target-num in nums_map:
            return [nums_map[target-num], i]
        nums_map[num] = i
        
#5 투 포인터 이용
#sort 해야만 사용가능, but sort하면 원래 인덱스 찾기 힘듦

