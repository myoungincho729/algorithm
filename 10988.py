st = input()

def pal(st):
    left, right = 0, len(st)-1
    while left < right:
        if st[left] != st[right]:
            return 0
        left += 1
        right -= 1
    return 1

print(pal(st))