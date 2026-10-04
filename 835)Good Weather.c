The weather report of Chefland is Good if the number of sunny days in a week is strictly greater than the number of rainy days.
#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    int count1=0;
	    int count0=0;
	    for(int i=0;i<7;i++){
	        scanf("%d",&n);
	        if(n==1){
	            count1+=1;
	        }
	        else{
	            count0+=1;
	        }
	    }
	    if(count1>count0){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}

//output
Input
Output
4
1 0 1 0 1 1 1
0 1 0 0 0 0 1
1 1 1 1 1 1 1
0 0 0 1 0 0 0
YES
NO
YES
NO
