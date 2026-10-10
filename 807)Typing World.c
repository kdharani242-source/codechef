Nikhil is analyzing typing ergonomics for a new custom keyboard layout. He wants to measure the continuous strain placed on a typist's individual hands.You are given a string S representing a word Nikhil wants to type. You are also given a string 
L containing distinct characters, representing all the keys on the keyboard that must be pressed using the left hand. Any letter which is not present in L must be typed with the right hand.Calculate the maximum number of consecutive key presses made by the same hand while typing the word S.
#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);

        char S[101], L[27];
        scanf("%s", S);
        scanf("%s", L);

        int max_count = 0, count = 0;
        char previous_hand = ' ';

        for (int i = 0; i < N; i++) {
            char hand = 'R';

            for (int j = 0; j < M; j++) {
                if (S[i] == L[j]) {
                    hand = 'L';
                    break;
                }
            }

            if (hand == previous_hand) {
                count++;
            } else {
                count = 1;
                previous_hand = hand;
            }

            if (count > max_count) {
                max_count = count;
            }
        }

        printf("%d\n", max_count);
    }

    return 0;
}

Input
Output
3
8 14
codechef
qwertasdfgzxcv
5 1
abcde
a
3 26
xyz
abcdefghijklmnopqrstuvwxyz
3
4
3
