Chef has a chocolate bar which is a rectangle-shaped of size 
N×M chocolate pieces.
He wants to divide this chocolate into 
2 equal pieces with a cut along a grid line. The cut needs to be parallel to the sides of the chocolate, and it cannot go through the middle of any chocolate piece.
Print Yes if it is possible to divide the chocolate into 2 equal pieces following these rules, and 
No otherwise.

  #include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a%2==0 || b%2==0){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}

Input
Output
4
1 1
1 2
3 4
3 5
No
Yes
Yes
No
