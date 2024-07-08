b, c = map(int, input().split())
print(b - c if b > c else b - c % b)