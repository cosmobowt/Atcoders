A = list(map(int, input().split()))
B = list(map(int, input().split()))
total_step = 0
for i in range(1, len(A)):
    a_diff = abs(A[i] - A[i-1])
    b_diff = abs(B[i] - B[i-1])
    max_step = max(a_diff, b_diff)
    total_step += max_step
print(total_step)
