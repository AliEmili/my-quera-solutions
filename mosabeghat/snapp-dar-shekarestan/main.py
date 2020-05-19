n, m = map(int,input().split())

ar = []

for i in range(n):
    temp = list(map(int, input().split()))
    ar.append(temp)

sum = 0
for i in range(m):
    x, y = map(int, input().split())
    sum += ar[x-1][y-1]

print(sum)