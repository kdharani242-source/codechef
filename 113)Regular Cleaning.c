Regular Cleaning
Chef will do a deep cleaning of his house every 
10
10 days - meaning on days numbered 
10
,
20
,
30
,
…
10,20,30,…

Today is day number 
N
N.
How many more days are there until the next day strictly after today that Chef will deep clean?



  #include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	printf("%d",(10-(n%10)));

}

