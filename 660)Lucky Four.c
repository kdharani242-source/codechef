
#include <stdio.h>

int main()
{
    int t, n, count, digit;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);
        count = 0;

        while(n > 0)
        {
            digit = n % 10;

            if(digit == 4)
            {
                count++;
            }

            n = n / 10;
        }

        printf("%d\n", count);
    }

    return 0;
}


Input

5
447474
228
6664
40
81
output

4
0
1
1
0
