Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not.

Note that 1 is not a prime number.




  #include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    if(n<=1){
	        printf("no\n");
	    }
	    else{
	        int count=0;
	        for(int i=2;i<(n/2)+1;i++){
	            if(n%i==0){
	                count+=1;
	            }
	        }
	        if(count==0){
	            printf("yes\n");
	        }
	        else{
	            printf("no\n");
	        }
	    }
	}

}

