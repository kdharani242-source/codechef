Chef is given the prices of N items and wants to buy exactly K of them.
Find the maximum possible total price of the K items he can choose.
# cook your dish here
def solve():
    n,k=map(int,input().split())
    li=list(map(int,input().split()))
    li.sort()
    li.reverse()
    print(sum(li[:k]))
t=int(input())
for _ in range(t):
    solve()

Input
Output
3
5 2
4 9 1 7 6
4 3
10 3 8 5
6 1
2 11 4 9 7 5
16
23
11
