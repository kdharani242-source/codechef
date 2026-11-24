# cook your dish here

n = int(input())
m = int(input())

freq = {}

# Read matrix A and count frequencies
for i in range(n):
    row = list(map(int, input().split()))
    for x in row:
        freq[x] = freq.get(x, 0) + 1

# Check elements of matrix B
ans = True

for i in range(m):
    row = list(map(int, input().split()))
    for x in row:
        if freq.get(x, 0) > 0:
            freq[x] -= 1
        else:
            ans = False

print("TRUE" if ans else "FALSE")


Input
3
2
1 7 2
8 3 6
9 5 3
1 2
3 3
output
TRUE
Explanation:
Matrix 
B
B contains 1, 2, 3, and 3.

Each of these values is present in matrix 
A
A, so the answer is TRUE.

Sample 2:
Input
3
3
1 2 3
4 5 6
7 8 9
1 2 2
4 5 5
7 8 8
output
FALSE
