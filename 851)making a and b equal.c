Chef has two numbers 
A and B
In one operation, Chef can choose either 
A or B and multiply it by 2
Determine whether he can make both 
A and B equal after any number (possibly, zero) of moves.

  #include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>b){
	        int temp=a;
	        a=b;
	        b=temp;
	    }
	    while(a<b){
	        a*=2;
	    }
	    if(a==b){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}
}

