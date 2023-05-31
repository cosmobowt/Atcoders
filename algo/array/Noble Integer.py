A = list(map(int, input().split()))

A.sort()

if A[-1] == 0:
    print('1')
for ind, val in enumerate(A):
    if val == (len(A)-(ind+1)) and float(val) < float(A[ind+1]):
        print('1')

print('-1')
