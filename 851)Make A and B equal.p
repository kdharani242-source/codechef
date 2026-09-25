Chef has two numbers 
A and B
In one operation, Chef can choose either 
A or B and multiply it by 2
Determine whether he can make both 
A and B equal after any number (possibly, zero) of moves.
# cook your dish here
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    if(a>b):
        temp=a;
        a=b;
        b=temp
    while(a<b):
        a*=2
    if(a==b):
        print('yes')
    else:
        print('no')
