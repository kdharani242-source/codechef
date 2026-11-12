
#include <stdio.h>

int main()
{
    int t, n, i, x;
    int odd, even;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        odd = 0;
        even = 0;

        for(i = 0; i < n; i++)
        {
            scanf("%d", &x);

            if(x % 2 == 0)
                even++;
            else
                odd++;
        }

        if(odd > even)
            printf("%d\n", 2 * even + 1);
        else if(even > odd)
            printf("%d\n", 2 * odd + 1);
        else
            printf("%d\n", odd + even);
    }

    return 0;
}

Input

2
5
1 3 7 4 5
4
1 1 2 4
Output
3
4
