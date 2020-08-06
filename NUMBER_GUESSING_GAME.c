#include<stdio.h>
#include<stdlib.h>         // These are the libraries we are going to use
#include<time.h>

int main(){
    int secret_number, number, guesses = 1;
    
    srand(time(0));            // Using these steps to generate the random number
    secret_number = rand()%100 + 1;  // 100 + 1 decides the range of the random number to be generated
    
    printf("Guess the number between 1 to 100:-\n");
    
    do                             // Using do_while to run this loop atleast once
    {
        printf("Guess number %d:-\n", guesses);  // Taking input from the user
        scanf("%d", &number);
        
        if (number > secret_number)      // First condition
        {
            printf("Lower number please\n");
        }
        
        else if (number < secret_number)  // Second condition
        {
            printf("Higher number please\n");
        }
        
        else             // Third condition
        {
            printf("You have guessed the secret number %d in %d attempts\n", secret_number, guesses);
            // This will display the number of attempts the player have taken
        }
        
        guesses++;  // Make sure to put guesses number equals to 1

    } while (number!=secret_number);  
    // If this condition will return false the control will be thrown outside the loop
    
    return 0;
}