
#include <stdio.h>

int main()
{
    int t, n, i, min, count, x;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        min = 1000000000;
        count = 0;

        int a[n];

        for(i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);

            if(a[i] < min)
            {
                min = a[i];
            }
        }

        for(i = 0; i < n; i++)
        {
            if(a[i] == min)
            {
                count++;
            }
        }

        if(count >= 2)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

Input

3
4
3 1 2 1
3
5 1 3
5
4 4 4 4 4
Output
YES
NO
YES
