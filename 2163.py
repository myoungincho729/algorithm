N, M = map(int,input().split())
if N < M:
    cnt = N-1 + (M-1)*N
    print(cnt)
else:
    cnt = M-1 + (N-1)*M
    print(cnt)
    