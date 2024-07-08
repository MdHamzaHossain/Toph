N = int(input())
for x in range(N+1): 
    if x == 0:
        continue
    else:
        s="* "*x
        s = s[:-1]
    print(" "*(N-1) + (s))
    N=N-1