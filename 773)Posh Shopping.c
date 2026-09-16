#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int li[n];
	    int max_num=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&li[i]);
	        if(li[i]>max_num){
	            max_num=li[i];
	        }
	    }
	    int ans=max_num;
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(li[i]<=li[j]){
	                int current_sum=li[i]+li[j];
	                if(current_sum>ans){
	                    ans=current_sum;
	                }
	            }
	        }
	    }
	    printf("%d\n",ans);
	}

}

