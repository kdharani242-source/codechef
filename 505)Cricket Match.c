#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m;
	    scanf("%d %d",&n,&m);
	    if(n<=(m*36)){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}

