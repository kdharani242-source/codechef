#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x1,x2,y1,y2;
	    scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	    if(y1/x1<y2/x2){
	        printf("%d\n",-1);
	    }
	    else if(y1/x1>y2/x2){
	        printf("%d\n",1);
	    }
	    else{
	        printf("%d\n",0);
	    }
	}

}


Input
Output
3
10 5 3 20
7 2 7 2
1 5 3 2
-1
0
1
