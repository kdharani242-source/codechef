#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,x;
	    scanf("%d %d",&n,&x);
	    if(n%6==0){
	        printf("%d\n",((n/6)*x));
	    }
	    else{
	        printf("%d\n",(((n/6)+1)*x));
	    }
	}

}

