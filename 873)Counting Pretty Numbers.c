#include <stdio.h>
int main()
{
    //write your code here
    int t;
    scanf("%d",&t);
    while(t--){
        int l,r;
        int count=0;
        scanf("%d %d",&l,&r);
        for(int i=l;i<=r;i++){
            if(i%10==2 || i%10==3 || i%10==9){
                count+=1;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}

Input
Output
2
1 10
11 33
3
8
