#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    printf("%d\n",((x*z)-(x*y)));
	}

}

Input
3
2 5 20
3 1 2
4 5 6
output
30
3
4
