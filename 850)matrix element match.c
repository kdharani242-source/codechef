
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    long long x = *(long long *)a;
    long long y = *(long long *)b;

    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    long long A[250000], B[250000];

    int sizeA = n * n;
    int sizeB = m * m;

    for (int i = 0; i < sizeA; i++)
        scanf("%lld", &A[i]);

    for (int i = 0; i < sizeB; i++)
        scanf("%lld", &B[i]);

    qsort(A, sizeA, sizeof(long long), compare);
    qsort(B, sizeB, sizeof(long long), compare);

    int i = 0, j = 0;

    while (i < sizeA && j < sizeB)
    {
        if (A[i] == B[j])
        {
            i++;
            j++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else
        {
            break;
        }
    }

    if (j == sizeB)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}


Input
3
2
1 7 2
8 3 6
9 5 3
1 2
3 3
output
TRUE
Explanation:
Matrix 
B
B contains 1, 2, 3, and 3.

Each of these values is present in matrix 
A
A, so the answer is TRUE.

Sample 2:
Input
3
3
1 2 3
4 5 6
7 8 9
1 2 2
4 5 5
7 8 8
output
FALSE
