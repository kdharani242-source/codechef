#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int first_a=(500-(a*2))+(1000-((a+b)*4));
	    int first_b=(1000-(b*4))+(500-((a+b)*2));
	    if(first_a>first_b){
	        printf("%d\n",first_a);
	    }
	    else{
	        printf("%d\n",first_b);
	    }
	}

}

