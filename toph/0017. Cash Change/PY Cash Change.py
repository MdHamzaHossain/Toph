N = int(input())

d = int(N/500)
result = " 500"*d
N = int(N % 500)

d = int(N / 100)
N = int(N % 100)
result = " 100" * d + result

d = int(N / 50)
N = int(N % 50)
result = " 50" * d + result

d = int(N / 10)
N = int(N % 10)
result = " 10" * d + result

d = int(N / 5)
N = int(N % 5)
result = " 5" * d + result


result = " 1" * N + result
print(result.strip())
