# cook your dish here
t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    print(max(0, 2 * (k - n)))
