# cook your dish here
t=int(input())
for i in range(t):
    x,y=map(int,input().split())
    n = 2 * max(x, y) - 1
    
    # Print the result
    print(n)


    Input
Output
4
2 5
8 10
99 1
4 8
9
19
197
15
