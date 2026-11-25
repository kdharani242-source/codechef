
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        char s[101];
        scanf("%s", s);

        int count1 = 0;
        int count0 = 0;
        int ans = 0;

        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1')
            {
                count1++;
            }
            else
            {
                count0++;
            }

            if (count1 > count0)
            {
                ans++;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}



Input
3
3
111
3
000
5
10011
output
3
0
2
