#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if(x<z){
	        printf("%d\n",x+(y/2));
	    }
	    else{
	        printf("%d\n",z+(y/2));
	    }
	}

}



Input
Output
2
2 2 1
3 3 3
2
4
Explanation:
Test Case 1 : You can make the following 
2
2 pairs:

One paper with 
1
1, one paper with 
3
3
Two papers with 
2
2 written.
