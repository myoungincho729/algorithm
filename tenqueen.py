from re import I


table = [0 for _ in range(11)]
visit = [0 for _ in range(10)]
def dfs(x, table):
    if x == 10 :
        print(table)
    else:
        for i in range(1, 11):               
            if check(x, i):
                table[x] = i
                dfs(x + 1, table)
                table[x] = 0
            
 

def check(x, v):
    for i in range(x):
        if table[i] == v:
            return 0
    for j in range(x):
        if table[j] == v + j + 1 or table[j] == v - j - 1:
            return 0
    return 1

dfs(0, table)
