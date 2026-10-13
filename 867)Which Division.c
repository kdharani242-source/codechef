Given the rating R of a person, tell which division he belongs to. The rating range for each division are given below:
Division 
#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    if(n>=2000){
	        printf("%d\n",1);
	    }
	    else if(n>=1600 && n<2000){
	        printf("%d\n",2);
	    }
	    else if(n<1600){
	        printf("%d\n",3);
	    }
	}

}

Input
Output
3
1500
4000
1900
3
1
2
