//python
# cook your dish here
# Read the number of test cases
t = int(input())

for _ in range(t):
    # Read N (not strictly needed for the logic in Python, but required by input format)
    n = int(input())
    
    # Read the list of contest codes
    codes = input().split()
    
    # Initialize counters
    start38_count = 0
    ltime108_count = 0
    
    # Iterate and count
    for code in codes:
        if code == "START38":
            start38_count += 1
        else:
            ltime108_count += 1
            
    # Print the results for the current test case
    print(f"{start38_count} {ltime108_count}")
