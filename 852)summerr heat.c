#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    printf("%d\n",(c/a)+(d/b));
	}

}

Input
3
100 400 1000 1200
100 450 1000 1350
150 400 1200 1200
output
13
13
11
