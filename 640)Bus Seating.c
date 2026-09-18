#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    if(0> 2 * (k - n)){
	        printf("%d\n",0);
	    }
	    else{
	        printf("%d\n",2 * (k - n));
	    }
	}

}

