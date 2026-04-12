Alice and Bob are playing a game. Each player rolls a standard six-sided die three times. The score of a player is calculated as the sum of the two highest rolls. The player with the higher score wins. If both players have the same score, the game ends in a tie.

Determine the winner of the game or if it is a tie.

#include <stdio.h>

// Function to find the minimum of three integers
int min3(int x, int y, int z) {
    int min = x;
    if (y < min) min = y;
    if (z < min) min = z;
    return min;
}

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    
    while (t--) {
        int a1, a2, a3, b1, b2, b3;
        scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3);
        
        // Calculate scores by subtracting the smallest die from the total sum
        int alice_score = (a1 + a2 + a3) - min3(a1, a2, a3);
        int bob_score = (b1 + b2 + b3) - min3(b1, b2, b3);
        
        if (alice_score > bob_score) {
            printf("Alice\n");
        } else if (bob_score > alice_score) {
            printf("Bob\n");
        } else {
            printf("Tie\n");
        }
    }
    return 0;
}
