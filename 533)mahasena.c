#include <stdio.h>

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	int li;
	int count=0;
	for(int i=0;i<n;i++){
	    scanf("%d",&li);
	    if(li%2==0){
	        count++;
	    }
	}
	if(count>n-count){
	    printf("ready for battle\n");
	}
	else{
	    printf("not ready\n");
	}

}

