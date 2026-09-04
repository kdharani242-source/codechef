Missing Number
Chef had 
4
4 pieces of paper with him, one paper with 
1
1 written on it, one paper with 
2
2, one paper with 
3
3 and finally one paper with 
4
4.

Now, Chef lost one of the pieces of paper, and noticed that the other numbers on his papers add up to 
S
S. Find the number on the missing paper.


#include <stdio.h>

int main() {
	// your code goes here
	int s;
	scanf("%d",&s);
	if(s==6){
	    printf("%d",4);
	}
	else if(s==7){
	    printf("%d",3);
	}
	else if(s==8){
	    printf("%d",2);
	}
	else{
	    printf("%d",1);
	}

}

