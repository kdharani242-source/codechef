The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.
# cook your dish here
t=int(input())
for i in range(t):
    li=list(map(int,input().split()))
    if(li.count(1)>li.count(0)):
        print('yes')
    else:
        print('no')

Input
Output
4
1 0 1 0 1 1 1
0 1 0 0 0 0 1
1 1 1 1 1 1 1
0 0 0 1 0 0 0
YES
NO
YES
NO
