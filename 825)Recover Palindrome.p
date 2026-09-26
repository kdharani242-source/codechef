# cook your dish here
def solve():
    n=int(input())
    s=input()
    unique=True
    for i in range(n):
        if(s[i]=='?' and s[n-1-i]=='?'):
            unique=False
            break
    if unique:
        print('yes')
    else:
        print('no')
t=int(input())
for _ in range(t):
    solve()



    Input
Output
5
3
aba
5
a?b?a
4
ab?a
3
???
5
?ab?a
YES
NO
YES
NO
YES
