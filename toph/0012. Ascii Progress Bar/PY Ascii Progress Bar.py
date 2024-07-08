import math
n = float(input())
r = math.floor(n/10)
print("[" + "+"*r + "."*(10-r) + "] " + str(math.floor(n)) + "%")