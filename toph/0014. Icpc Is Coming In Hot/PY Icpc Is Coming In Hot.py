n = input()
biggest = 1
t = 0
most = 0
counts = [0 for x in range(10)]
i = 0
for c in n:
    c1 = int(c)
    if i == 0:
        most = c1
    i += 1
    counts[c1] += 1
    t = counts[c1]
    if t == biggest:
        most = c1 if (most > c1) else most
    elif t > biggest:
        most = c1
        biggest = t
print(most)
