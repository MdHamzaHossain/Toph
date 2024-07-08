A, B = map(str, input().split())
x = int(A[-1])
y = int(B[-1])
print("Black" if ((x % 2 == 0 and y % 2 == 0) or (x % 2 == 1 and y % 2 == 1)) else "White")