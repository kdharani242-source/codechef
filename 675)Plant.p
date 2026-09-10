# cook your dish here
def solve():
    n=int(input())
    a=list(map(int,input().split()))
    #max_ht=0
    for j in range(n-1):
        current_ht=min(a[j],a[j+1])
        #max_ht=max(max_ht,current_ht)
    print(current_ht)
t=int(input())
for i in range(t):
    solve()
