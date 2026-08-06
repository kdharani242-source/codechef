# cook your dish here
t=int(input())
for i in range(t):
    x=int(input())
    if(x<=20):
        print(x*10)
    else:
        print((((x-20)//2)*5)+200)
