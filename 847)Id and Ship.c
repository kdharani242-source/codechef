#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    char s;
	    scanf(" %c",&s);
	    if(s=='B' || s=='b'){
	        printf("BattleShip\n");
	    }
	    else if(s=='C' || s=='c'){
	        printf("Cruiser\n");
	    }
	    else if(s=='D' || s=='d'){
	        printf("Destroyer\n");
	    }
	    else if(s=='F' || s=='f'){
	        printf("Frigate\n");
	    }
	}
}

