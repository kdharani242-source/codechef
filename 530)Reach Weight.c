#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    if(n%2==0){
	        printf("%d\n",(n/2)*30);
	    }
	    else{
	        printf("%d\n",((n-1)/2)*30+20);
	    }
	}

}

