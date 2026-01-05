int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x%2!=0){
	        printf("%d\n",-1);
	    }
	    else if(x%4==0){
	        printf("%d\n",1);
	    }
	    else{
	        printf("%d\n",0);
	    }
	}

}

