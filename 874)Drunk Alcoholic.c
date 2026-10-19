#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int k;
	    scanf("%d",&k);
	    int count=0;
	    for(int i=1;i<=k;i++){
	        if(i%2==1){
	            count+=3;
	        }
	        else{
	            count-=1;
	        }
	    }
	    printf("%d\n",count);
	}

}



Input
Output
3
5
11
23
7
13
25
