A = list(map(int, input().split()))
B = int(input())

res = 0
i = 0
while i < len(A):
    c = 0
    for j in range(B - 1 + i, i - B + 1, -1):
        if A[j] == 1:
            res += 1
            c += 1
            i = j + B

