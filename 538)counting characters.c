#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    char s[15];
	    scanf("%s",&s);
	    int a=0;
	    int b=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='a'){
	            a++;
	        }
	        else{
	            b++;
	        }
	    }
	    printf("%d %d\n",a,b);
	}

}

