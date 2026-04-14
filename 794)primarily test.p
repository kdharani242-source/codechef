Primality Test

Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not.

Note that 1 is not a prime number.





# cook your dish here
t=int(input())
for i in range(t):
    n=int(input())
    if(n==0 or n==1):
        print("no")
    else:
        count=0
        for j in range(2,(n//2)+1):
            if(n%j==0):
                count+=1
        if(count==0):
            print("yes")
        else:
            print("no")
