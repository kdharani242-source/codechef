#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,k;
	    scanf("%d %d %d",&a,&b,&k);
	    int diff=abs(a-b);
	    int steps=(diff+k-1)/k;
	    printf("%d\n",steps);
	}

}
