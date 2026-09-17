# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    if(n%2==0):
        print((n//2)*30)
    else:
        print(((n//2)*30)+20)
