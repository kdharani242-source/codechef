Scalene Triangle
Given A,B, and C
C as the sides of a triangle, find whether the triangle is scalene
Note:
A triangle is said to be scalene if all three sides of the triangle are distinct.
It is guaranteed that the sides represent a valid triangle.
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        // Your code goes here
        if(a!=b && a!=c && b!=c){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}
