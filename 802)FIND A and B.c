#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if((x*y)%z==0){
	        printf("%d %d\n",x*y,z);
	    }
	    else if((x*z)%y==0){
	        printf("%d %d\n",x*z,y);
	    }
	    else if((y*z)%x==0){
	        printf("%d %d\n",y*z,x);
	    }
	    else{
	        printf("%d\n",-1);
	    }
	}

}

