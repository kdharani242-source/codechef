#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x<=20){
	        printf("%d\n",x*10);
	    }
	    else{
	        printf("%d\n",((((x-20)/2)*5)+200));
	    }
	}

}

