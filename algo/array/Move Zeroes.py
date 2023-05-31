# A = input()
# a = []
# for i in A:
#     if i != 0:
#         a.append(i)
#
# n = A.count(0)
#
# for i in range(n):
#     a.append(0)
#
# print(a)

A = list(map(int, input().split()))
i = 0
for j in range(len(A)):
    if A[j] != 0:
        # swap(A[j], A[i]);
        temp = A[i]
        A[i] = A[j]
        A[j] = temp
        i += 1
print(A)
