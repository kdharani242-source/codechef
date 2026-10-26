#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a+b<3){
	        printf("%d\n",1);
	    }
	    else if(3<=a+b && a+b<=10){
	        printf("%d\n",2);
	    }
	    else if(11<= a+b && a+b<=60){
	        printf("%d\n",3);
	    }
	    else if(60<=a+b){
	        printf("%d\n",4);
	    }
	}

}


Input
Output
4
1 0
4 1
100 0
20 5
1
2
4
3
