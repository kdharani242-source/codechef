#include <stdio.h>

int main() {
	// your code goes here
	int t;
    scanf("%d", &t);
    
    while (t--) {
        long long n, m;
        scanf("%lld %lld", &n, &m);
        
        // Calculate the total minutes using the sum formula:
        // Sum from 1 to N minus Sum from 1 to M
        long long total_minutes = (n * (n + 1) / 2) - (m * (m + 1) / 2);
        
        printf("%lld\n", total_minutes);
    }
    
    return 0;

}
