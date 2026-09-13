#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m,x;
	    scanf("%d %d %d",&n,&m,&x);
	    int r=(x-1)/m+1;
	    if(r<n+1-r){
	        printf("%d\n",r);
	    }
	    else{
	        printf("%d\n",n+1-r);
	    }
	}

}

