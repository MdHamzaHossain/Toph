a = int(input())
friends = 0
for i in range(1, a):
    if a % i == 0:
        friends = friends+1

print(friends)
