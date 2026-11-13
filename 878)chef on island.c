#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,xr,yr,d;
	    int minimum=0;
	    scanf("%d %d %d %d %d",&x,&y,&xr,&yr,&d);
	    if(x/xr<=y/yr){
	        minimum=x/xr;
	    }
	    else{
	        minimum=y/yr;
	    }
	    if(minimum>=d){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}

Input

3
4 2 1 1 1
4 2 1 3 1
4 2 4 2 2
output
YES
NO
NO
