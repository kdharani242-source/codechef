Professor Snape has lots of potions. Bottles containing all types of potions are stacked on shelves which cover the entire wall from floor to ceiling. Professor Snape has broken his bones several times while climbing the top shelf for retrieving a potion. He decided to get a ladder for him. But he has no time to visit Diagon Alley. So he instructed Ron Weasley to make a ladder for him. Professor Snape specifically wants a step ladder which looks like an inverted 'V' from side view.
XxAtE7i.png
Professor just mentioned two things before vanishing-
B - separation between left side (LS) and right side (RS) on the ground
LS - the length of left side
What should be the length of RS? At one extreme LS can be vertical and at other RS can be vertical. Ron is angry and confused. Since Harry is busy battling Voldemort, its your duty to help him find the minimum and maximum length of RS.

#include <stdio.h>
#include <math.h>

void solve() {
    int t;
    scanf("%d", &t);
    while (t--) {
        double b, ls;
        scanf("%lf %lf", &b, &ls);
        
        // Calculate minimum and maximum RS using the Pythagorean theorem
        double rs_min = sqrt(ls * ls - b * b);
        double rs_max = sqrt(ls * ls + b * b);
        
        printf("%.5f %.5f\n", rs_min, rs_max);
    }
}

int main() {
    solve();
    return 0;
}


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
