#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &b[i]);
        }
        // Your code goes here
        int count=0;
        for(int i=0;i<n;i++){
            if(b[i]<=2*a[i] && a[i]<=2*b[i]){
                count=count+1;
            }
        }
        printf("%d\n",count);
        
    }
    

    return 0;
}

Input
4
3
100 200 300
300 200 100
4
1000 1000 1000 1000
400 500 600 1200
4
800 399 1400 532
2053 2300 3400 23
5
800 850 900 950 1000
600 800 1000 1200 1400
output
1
3
0
5
