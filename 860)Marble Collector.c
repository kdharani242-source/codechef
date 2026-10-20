#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d %d",&n,&m);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int count = 0;

        for (int j = 1; j <= m; j++) {
            int found = 0;

            for (int i = 0; i < n; i++) {
                if (a[i] == j) {
                    found = 1;
                    break;
                }
            }

            if (found == 0) {
                count++;
            }
        }

        printf("%d\n", count);
	}

}



Input
Output
3
3 3
1 1 2
1 100
42
3 1
1 1 1
1
99
0
