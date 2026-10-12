HOW MANY DIGITS DO I HAVE
Write a program to obtain a number 
(N) from the user and display whether the number is a one digit number, 2 digit number, 3 digit number or more than 3 digit number

#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	int temp=abs(n);
	if(temp<10){
	    printf("%d\n",1);
	}
	else if(temp<100){
	    printf("%d\n",2);
	}
	else if(temp<1000){
	    printf("%d\n",3);
	}
	else{
	    printf("More than 3 digits");
	}

}

Input
Output
9
1
