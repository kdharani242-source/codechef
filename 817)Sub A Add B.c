#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,a,b;
	    scanf("%d %d %d",&n,&a,&b);
	    while(n>=a){
	        n=n-a+b;
	    }
	    printf("%d\n",n);
	}

}

