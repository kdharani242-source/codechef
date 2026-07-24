#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>b+c || b>a+c || c>a+b){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}

