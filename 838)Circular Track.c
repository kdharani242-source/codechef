#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,m;
	    scanf("%d %d %d",&a,&b,&m);
	    int d=abs(a-b);
	    if(d<m-d){
	        printf("%d\n",d);
	    }
	    else{
	        printf("%d\n",m-d);
	    }
	}

}

Input
Output
4
1 3 100
1 98 100
40 30 50
2 1 2
2
3
10
1
