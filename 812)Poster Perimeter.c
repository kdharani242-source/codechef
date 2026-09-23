#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m,k;
	    scanf("%d %d %d",&n,&m,&k);
	    int max_para=2*(n+m);
	    if(k>=max_para){
	        printf("%d\n",k-max_para);
	    }
	    else if(k<=4){
	        printf("%d\n",4-k);
	    }
	    else{
	        printf("%d\n",k%2);
	    }
	}

}

