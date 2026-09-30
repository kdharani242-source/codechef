# cook your dish here
def solve():
    d,x,y,z=map(int,input().split())
    way1 = 7 * x
    way2 = (y * d) + (z * (7 - d))
    
    # Print the maximum of the two
    print(max(way1, way2))
t=int(input())
for i in range(t):
    solve()

    //output
    Input
Output
3
1 2 3 1
6 2 3 1
1 2 8 1
14
19
14
