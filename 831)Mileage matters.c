#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x,y,a,b;
	    scanf("%d %d %d %d %d",&n,&x,&y,&a,&b);
	    if(x*b<y*a){
	        printf("petrol\n");
	    }
	    else if(x*b>y*a){
	        printf("diesel\n");
	    }
	    else{
	        printf("any\n");
	    }
	}

}

