def gcd(x,y):
    if y == 0:
        return x
    else:
        return gcd(y,x%y)

def baesu(x,y):
    return x*(y//gcd(x,y))

t = int(input())
for _ in range(t):
    a,b = map(int,input().split())
    print(baesu(a,b))
