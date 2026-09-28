The citizens of Byteland regularly play a game. They have blocks each denoting some integer from 0 to 9. These are arranged together in a random manner without seeing to form different numbers keeping in mind that the first block is never a 0. Once they form a number they read in the reverse order to check if the number and its reverse is the same. If both are same then the player wins. We call such numbers palindrome.

Ash happens to see this game and wants to simulate the same in the computer. As the first step he wants to take an input from the user and check if the number is a palindrome and declare if the user wins or not. 

  #include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        
        int original = n;
        int reversed = 0;
        
        // Reverse the number mathematically
        while(n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }
        
        // Check if original number and reversed number are the same
        if(original == reversed){
            printf("wins\n");
        }
        else{
            printf("loses\n");
        }
    }
    return 0;
}

//output
Input
Output
3
331
666
343
loses
wins
wins
