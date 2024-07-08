T = int(input())

for i in range(0, T):
    A, B,C = map(str, input().split(" "))

    A = int(A.strip())
    B = B.strip()[0]
    C = int(C.strip())
    S = "Case "
    S+= str(i+1)
    S+=": "

    if B == "+": 
        res=(A + C)
    if B == "-":
        res=(A - C)
    if B == "*":
        res=(A * C)
    S+= str(res)
    print(S)