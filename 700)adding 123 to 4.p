# cook your dish here
t=int(input())
for i in range(t):
    x,y,z=map(int,input().split())
    print(int(min(x,z)+y/2))


    
Input
Output
2
2 2 1
3 3 3
2
4
Explanation:
Test Case 1 : You can make the following 
2
2 pairs:

One paper with 
1
1, one paper with 
3
3
Two papers with 
2
2 written.
