#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int h[n];
	    
	    for(int i=0;i<n;i++){
	        scanf("%d",&h[i]);
	    }
	    for(int i=0;i<n;i++){
	        int persons=0;
	        int ht=h[n-1];
	        if(h[i]>=ht){
	            persons=n-1-i;
	            printf("%d\n",persons);
	            break;
	            
	        }
	        //printf("%d\n",persons);
	    }
	    
	}

}



Input

3
6
2 4 1 7 5 3
4
1 2 3 4
4
3 1 2 3
Output
4
0
3
