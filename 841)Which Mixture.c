Chef has A units of solid and B units of liquid. He combines them to create a mixture. What kind of mixture does Chef produce: a solution, a solid, or a liquid?
  #include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a==0){
	        printf("liquid\n");
	    }
	    else if(b==0){
	        printf("solid\n");
	    }
	    else{
	        printf("solution\n");
	    }
	}

}

Input
Output
3
10 5
0 3
3 0
Solution
Liquid
Solid
