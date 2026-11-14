
#include <stdio.h>

int main()
{
    int t, n, k;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d", &n, &k);

        if(k == n - 1)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}


Input
5
1 0
1 1
2 0
2 1
3 1
output
No
Yes
Yes
No
Yes
