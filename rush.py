s = list(map(int,input().split()))
l = len(s) // 4
table = [[0 for _ in range(l + 2)] for _ in range(l + 2)]
cnt = 1
for i in range(len(s)):
    if i % l == 0:
        cnt = 1
    if 0 <= i < l:
        table[0][cnt] = s[i]
    elif l <= i < l * 2:
        table[l + 1][cnt] = s[i]
    elif l * 2 <= i < l * 3:
        table[cnt][0] = s[i]
    else:
        table[cnt][l + 1] = s[i]
    cnt += 1

def check(x, y, c):
    for i in range(1, y):
        if table[x][i] == c:
            return False
    for i in range(1, x):
        if table[i][y] == c:
            return False
    return True

def check2(x, y, c):
    table[x][y] = c
    cnt = 0
    temp = 0
    for i in range(1, y + 1):
        if table[x][i] > temp:
            cnt += 1
            temp = table[x][i]
    if cnt > table[x][0]:
        return False
    cnt = 0
    temp = 0
    for i in range(1, x + 1):
        if table[i][y] > temp:
            cnt += 1
            temp = table[i][y]
    if cnt > table[0][y]:
        return False
    if y == l:
        cnt = 0
        temp = 0
        for i in range(y, 0, -1):
            if table[x][i] > temp:
                cnt += 1
                temp = table[x][i]
        if cnt != table[x][l + 1]:
            return False
    if x == l:
        cnt = 0
        temp = 0
        for i in range(x, 0, -1):
            if table[i][y] > temp:
                cnt += 1
                temp = table[i][y]
        if cnt != table[l + 1][y]:
            return False
    return True

def dfs(x, y):
    if x == l + 1 and y == 1:
        print(table)

    else:
        for i in range(1, l + 1):
            if check(x, y, i) and check2(x, y, i):
                table[x][y] = i
                if y == l:
                    dfs(x + 1, 1)
                else:
                    dfs(x, y + 1)
                table[x][y] = 0
x = 1
y = 1
dfs(x, y)
