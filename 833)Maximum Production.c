#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int d,x,y,z;
	    scanf("%d %d %d %d",&d,&x,&y,&z);
	    if(x*7>((y*d)+z*(7-d))){
	        printf("%d\n",x*7);
	    }
	    else{
	        printf("%d\n",((y*d)+z*(7-d)));
	    }
	}

}

Input
Output
3
1 2 3 1
6 2 3 1
1 2 8 1
14
19
14
