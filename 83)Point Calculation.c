Point Calculation
Your favourite team participated in the recent FIFA World Cup, and in the group stages, they won 
A
A games, drew 
B
B games, and lost 
C
C games.

How many points did your team score? A win is awarded 
3
3 points, a draw awarded 
1
1 point, and a loss 
0
0 points.


  #include <stdio.h>

int main() {
	// your code goes here
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d",((a*3)+(b*1)));

}

