Consider a currency system in which there are notes of six denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100.
If the sum of Rs. N is input, write a program to compute smallest number of notes that will combine to give Rs. N.

  
#include <stdio.h>

int main() {
    int T, N;
    int notes[] = {100, 50, 10, 5, 2, 1};

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);
        int count = 0;

        for (int i = 0; i < 6; i++) {
            count += N / notes[i];
            N %= notes[i];
        }

        printf("%d\n", count);
    }

    return 0;
}
Input
Output
3 
1200
500
242
12
5
7
