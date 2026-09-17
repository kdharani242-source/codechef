#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,m,d;
	    scanf("%d %d %d",&x,&m,&d);
	    if(x*m>x+d){
	        printf("%d\n",x+d);
	    }
	    else{
	        printf("%d\n",x*m);
	    }
	}

}

