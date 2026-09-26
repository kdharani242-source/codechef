#include <stdio.h>

int main() {
	// your code goes here
	char s[5];
	scanf("%s", s);
	if(s[0]==s[2] && s[1]==s[3]){
	    printf("yes\n");
	}
	else{
	    printf("no\n");
	}

}

//output
meme
Yes
Explanation:
The first and third characters of meme are both equal (to m), and its second and fourth characters are also both equal (to e).
So, meme is an echo.
