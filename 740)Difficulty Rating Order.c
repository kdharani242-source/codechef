#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int d[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &d[i]);
        }
        
        // Your code goes here
        int count=0;
        for (int j=0;j<n-1;j++){
            if(d[j]<=d[j+1]){
                count+=1;
            }
        }
        if(count==n-1){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
}

Input
Output
4
3
1 2 3
3
1 1 2
5
100 200 300 400 350
5
1000 2000 5000 3000 1000
Yes
Yes
No
No
