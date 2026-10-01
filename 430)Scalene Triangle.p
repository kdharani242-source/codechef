Scalene Triangle
Given A,B, and C
C as the sides of a triangle, find whether the triangle is scalene
Note:
A triangle is said to be scalene if all three sides of the triangle are distinct.
It is guaranteed that the sides represent a valid triangle.

t = int(input())

while t > 0:
    a, b, c = map(int, input().split())
    # Your code goes here
    if(a!=b and a!=c and b!=c):
        print('yes')
    else:
        print('no')
    t -= 1
