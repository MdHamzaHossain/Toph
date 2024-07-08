N = int(input())
S = [""] * N
biggest = 0
for i in range(0, N):

    t = str(input())
    if len(t) % 2 == 0:
        if len(t) == 2:
            t += "a"
        else:
            t = t[0:-1]
    S[i] = t
    biggest = len(t) if len(t) > biggest else biggest
for i, s in enumerate(S):
    S[i] = s.center(biggest, " ").rstrip()
    print(S[i])
