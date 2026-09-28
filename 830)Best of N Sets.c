#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>y){
	        printf("%d\n",2*x-1);
	    }
	    else{
	        printf("%d\n",2*y-1);
	    }
	}

}

Input
Output
4
2 5
8 10
99 1
4 8
9
19
197
15
