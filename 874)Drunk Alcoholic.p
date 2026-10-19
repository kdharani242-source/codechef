# cook your dish here
t=int(input())
for i in range(t):
    k=int(input())
    count=0
    for j in range(1,k+1):
        if(j%2==1):
            count+=3
        else:
            count-=1
    print(count)


Sample 1:
Input
Output
3
5
11
23
7
13
25
