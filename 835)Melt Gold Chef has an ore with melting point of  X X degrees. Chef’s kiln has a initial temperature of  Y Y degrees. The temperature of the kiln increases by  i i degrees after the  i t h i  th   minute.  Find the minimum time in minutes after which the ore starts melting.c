Chef has an ore with melting point of X degrees.
Chef’s kiln has a initial temperature of degrees. The temperature of the kiln increases by degrees after the ith minute.
Find the minimum time in minutes after which the ore starts melting.

  #include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int temp=y;
	    int count=0;
	    while(temp<x){
	        count+=1;
	        temp+=count;
	    }
	    printf("%d\n",count);
	}

}

Input
Output
3
3 2
5 3
10 5
1
2
3
