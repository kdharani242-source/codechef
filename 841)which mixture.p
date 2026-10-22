Chef has A units of solid and B units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?
# cook your dish here
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    if(a==0):
        print('liquid')
    elif(b==0):
        print('solid')
    else:
        print('solution')

Input
Output
3
10 5
0 3
3 0
Solution
Liquid
Solid
