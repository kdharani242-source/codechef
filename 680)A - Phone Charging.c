#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,a,b;
	    scanf("%d %d %d",&x,&a,&b);
	    if(x>=80){
	        printf("%d\n",((100-x)*b));
	    }
	    else{
	        printf("%d\n",(((80-x)*a)+(20*b)));
	    }
	}

}

Input
Output
5
0 1 2
79 7 10
80 3 8
99 1 100
100 99 100
120
207
160
100
0
