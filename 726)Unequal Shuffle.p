# cook your dish here
def solve():
    n=int(input())
    l1=input()
    l2=input()
    if(l1.count('a')==l2.count('b')):
        print('yes')
    else:
        print('no')
t=int(input())
for i in range(t):
    solve()
