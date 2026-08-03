# cook your dish here
# Read initial ratings
R1, R2 = map(int, input().split())

# Read rating changes
D1, D2 = map(int, input().split())

# Calculate final ratings
final_dominater = R1 + D1
final_everule = R2 + D2

# Compare and print the result
if final_dominater > final_everule:
    print("Dominater")
else:
    print("Everule")
