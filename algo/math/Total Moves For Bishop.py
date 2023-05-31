A = int(input())
B = int(input())

top_left = [0, 0]
top_right = [0, 8]
bottom_left = [8, 0]
bottom_right = [8, 8]

top_left_matrix = [abs(top_left[0]-A)-1, abs(top_left[1]-B)]
top_right_matrix = [abs(top_right[0]-A)-1, abs(top_right[1]-B)]
bottom_left_matrix = [abs(bottom_left[0]-A)-1, abs(bottom_left[1]-B)]
bottom_righ_matrixt = [abs(bottom_right[0]-A)-1, abs(bottom_right[1]-B)]

total = min(top_left_matrix) + min(top_right_matrix) + min(bottom_left_matrix) + min(bottom_righ_matrixt)

print(total)
