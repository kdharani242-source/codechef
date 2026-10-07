A certain type of steel is graded according to the following conditions.
Hardness of the steel must be greater than 50
Carbon content of the steel must be less than 0.7
Tensile strength must be greater than 5600
The grades awarded are as follows:
Grade is 10 if all three conditions are met
Grade is 9 if conditions (1) and (2) are met
Grade is 8 if conditions (2) and (3) are met
Grade is 7 if conditions (1) and (3) are met
Grade is 6 if only one condition is met
Grade is 5 if none of the three conditions are met
Write a program to display the grade of the steel, based on the values of hardness, carbon content and tensile strength of the steel, given by the user.

  #include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int hardness, tensile;
        float carbon;

        scanf("%d %f %d", &hardness, &carbon, &tensile);

        int cond1 = hardness > 50;
        int cond2 = carbon < 0.7;
        int cond3 = tensile > 5600;

        if (cond1 && cond2 && cond3)
            printf("10\n");
        else if (cond1 && cond2)
            printf("9\n");
        else if (cond2 && cond3)
            printf("8\n");
        else if (cond1 && cond3)
            printf("7\n");
        else if (cond1 || cond2 || cond3)
            printf("6\n");
        else
            printf("5\n");
    }

    return 0;
}
