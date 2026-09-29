Professor Snape has lots of potions. Bottles containing all types of potions are stacked on shelves which cover the entire wall from floor to ceiling. Professor Snape has broken his bones several times while climbing the top shelf for retrieving a potion. He decided to get a ladder for him. But he has no time to visit Diagon Alley. So he instructed Ron Weasley to make a ladder for him. Professor Snape specifically wants a step ladder which looks like an inverted 'V' from side view.
XxAtE7i.png
Professor just mentioned two things before vanishing-
B - separation between left side (LS) and right side (RS) on the ground
LS - the length of left side
What should be the length of RS? At one extreme LS can be vertical and at other RS can be vertical. Ron is angry and confused. Since Harry is busy battling Voldemort, its your duty to help him find the minimum and maximum length of RS.

# cook your dish here
import math

def solve():
    t = int(input())
    for _ in range(t):
        # Read B and LS for each test case
        b, ls = map(int, input().split())
        
        # Calculate minimum and maximum RS using the Pythagorean theorem
        rs_min = math.sqrt(ls**2 - b**2)
        rs_max = math.sqrt(ls**2 + b**2)
        
        print(f"{rs_min:.5f} {rs_max:.5f}")

if __name__ == '__main__':
    solve()

    //output
    Input
Output
3
4 5
10 12
10 20
3.0 6.40312
6.63325 15.6205
17.3205 22.3607
