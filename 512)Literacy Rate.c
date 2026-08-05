#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int p,l;
	    scanf("%d %d",&p,&l);
	    if((l * 100) >= (75 * p)){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}

