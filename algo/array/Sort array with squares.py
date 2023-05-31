A = list(map(int, input().split()))

print(A)
result = []
for i in A:
    result.append(i*i)
new_list = []
i = 0
j = len(A)-1
while i <= j:
    if result[i]>result[j]:
        new_list.append(result[i])
        i += 1
    else:
        new_list.append(result[j])
        j -= 1

print(new_list[::-1])
