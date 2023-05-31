A = list(map(int, input().split()))
for i in range(1, len(A)-1):
    flag1 = 1
    flag2 = 1
    left = []
    right = []
    for j in range(0, i):
        left.append(A[j])
        if max(left) >= A[i]:
            flag1 = 0
    for j in range(i+1, len(A)):
        right.append(A[j])
        if min(right) <= A[i]:
            flag2 = 0
    if flag1 == 1 and flag2 == 1:
        print("1")
        break



