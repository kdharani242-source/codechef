#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    char a[n];
	    char b[n];
	    int a_count=0;
	    int b_count=0;
	    for(int i=0;i<n;i++){
	        scanf(" %c",&a[i]);
	        if(a[i]=='a'){
	            a_count=a_count+1;
	        }
	        scanf(" %c",&b[i]);
	        if(b[i]=='b'){
	            b_count=b_count+1;
	        }
	    }
	    if(a_count==b_count){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}

