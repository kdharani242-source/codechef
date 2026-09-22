DNA Storage
For encoding an even-length binary string into a sequence of A, T, C, and G, we iterate from left to right and replace the characters as follows:

00 is replaced with A
01 is replaced with T
10 is replaced with C
11 is replaced with G
Given a binary string 
S
S of length 
N
N (
N
N is even), find the encoded sequence.



t = int(input())

while t > 0:
    n = int(input())
    s = input()
    # Your code goes here
    mapping={
        "00":"A",
        "01":"T",
        "10":"C",
        "11":"G"
    }
    ans=[]
    for i in range(0,n,2):
        pair=s[i:i+2]
        ans.append(mapping[pair])
    print("".join(ans))
    t -= 1
