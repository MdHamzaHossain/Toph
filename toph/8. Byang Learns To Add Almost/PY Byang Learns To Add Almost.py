
A, B = map(int, input().split())

while True:

    if (int(A % 10) + int(B % 10)) > 9:
        print("Yes")
        
        exit()

    A = int(A/10)
    B = int(B/10)
    if A == 0 or B == 0:
        break

print("No")
