For today, Chef is out of town, and his evil son has taken over his bakery.

Normally, Chef sells his cakes for 
100
100 rupees each. However, his son can be bribed with 
K
K rupees, to sell each cake for 
60
60 rupees instead. Note that you have to pay this bribe only one time, not for each cake.

You want to buy 
N
N cakes from the bakery. You can choose whether to bribe Chef's son or not. What is the minimum cost of buying the 
N
N cakes.
//programme




#include <stdio.h>

int main() {
    int n, k;
    // Read N and K
    if (scanf("%d %d", &n, &k) == 2) {
        int normal_cost = 100 * n;
        int bribe_cost = k + (60 * n);
        
        // Find the minimum using a ternary operator
        int min_cost = (normal_cost < bribe_cost) ? normal_cost : bribe_cost;
        
        printf("%d\n", min_cost);
    }
    return 0;
}
