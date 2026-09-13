# cook your dish here
t=int(input())
for i in range(t):
    a,b=map(int,input().split())
    first_a=(500-(a*2))+(1000-((a+b)*4))
    first_b=(1000-(b*4))+(500-((a+b)*2))
    print(max(first_a,first_b))
