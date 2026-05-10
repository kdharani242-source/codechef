#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int total=a+b;
	    if((total/2)%2==0){
	        printf("alice\n");
	    }
	    else{
	        printf("bob\n");
	    }
	}

}

