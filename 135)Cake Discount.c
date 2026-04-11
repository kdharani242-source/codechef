You buy 
N
N cakes from Chef's bakery. Normally, each cake costs 
100
100 rupees.

However, Chef has a special discount offer. If you buy at least 
5
5 cakes, then you get a 
15
15 percent discount on all your bought cakes, i.e. each cake costs only 
85
85 rupees.

Find the cost, in rupees, that you paid for the 
N
N cakes.

  #include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	if(n<5){
	    printf("%d",n*100);
	}
	else{
	    printf("%d",n*85);
	}

}

