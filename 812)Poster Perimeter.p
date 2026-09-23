# cook your dish here
t=int(input())
for i in range(t):
    n,m,k=map(int,input().split())
    max_para=2*(n+m)
    if k>=max_para:
        print(k-max_para)
    elif(k<=4):
        print(4-k)
    else:
        print(k%2)
