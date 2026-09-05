Water Park
Chef decides to go to the water park to play. To enter the water slide, a person must have a weight of at most 
W
W Kg and a height of at least 
H
H cm.

Chef weighs 
60
60 Kg and his height is 
130
130 cm.

Is Chef allowed to enter the water slide?



  #include <stdio.h>

int main() {
	// your code goes here
	int w,h;
	scanf("%d %d",&w,&h);
	if(w>=60 && h<=130){
	    printf("yes\n");
	}
	else{
	    printf("no\n");
	}

}

