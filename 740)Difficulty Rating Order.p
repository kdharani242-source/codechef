t = int(input())

while t > 0:
    n = int(input())
    d = list(map(int, input().split()))
    # Your code goes here
    count=0
    for i in range(len(d)-1):
        if(d[i]<=d[i+1]):
            count+=1
    if count==n-1:
        print('yes')
    else:
        print('no')
    t -= 1

Input
Output
4
3
1 2 3
3
1 1 2
5
100 200 300 400 350
5
1000 2000 5000 3000 1000
Yes
Yes
No
No
