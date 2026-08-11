#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x<y){
	        printf("bike\n");
	    }
	    else if(x>y){
	        printf("car\n");
	    }
	    else{
	        printf("same\n");
	    }
	}

}

