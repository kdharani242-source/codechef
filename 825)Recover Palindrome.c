#include <stdio.h>
#include <stdbool.h>
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    char s[n+1];
	    scanf("%s", s);
	    bool unique=true;
	    for(int i=0;i<n;i++){
	        if(s[i]=='?' && s[n-1-i]=='?'){
	            unique=false;
	            break;
	        }
	    }
	    if(unique){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}

#output
Input
Output
5
3
aba
5
a?b?a
4
ab?a
3
???
5
?ab?a
YES
NO
YES
NO
YES
