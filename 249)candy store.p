Chef has started working at the candy store. The store has 
100 chocolates in total.chef’s daily goal is to sell X chocolates. For each chocolate sold, he will get 1 rupee. However, if Chef exceeds his daily goal, he gets 
2 rupees per chocolate for each extra chocolate.if Chef sells y chocolates in a day, find the total amount he made.
t = int(input())

while t > 0:
    x, y = map(int, input().split())
    # Your code goes here
    if(y<=x):
        print(y)
    else:
        print(x+((y-x)*2))
    t -= 1
Input
Output
4
3 1
5 5
4 7
2 3
1
5
10
4
