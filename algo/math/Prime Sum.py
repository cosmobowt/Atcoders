import math

A = int(input())

prime_list = [2]
for i in range(3, A):
    flag = 0
    for j in range(2, math.ceil(math.sqrt(i))):
        if i % j == 0:
            flag = 1
            break
    if flag == 0:
        prime_list.append(i)

for i in prime_list:
    for j in prime_list:
        if i+j == A:
            print("{0}, {1}".format(i, j))
