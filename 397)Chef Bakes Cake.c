#include <stdio.h>

int main() {
    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);
    
    // Number of cakes that fit in one vehicle
    int per_vehicle = y / x;
    
    // Ceiling division: (n + per_vehicle - 1) / per_vehicle
    int vehicles = (n + per_vehicle - 1) / per_vehicle;
    
    printf("%d\n", vehicles);
    
    return 0;
}
