#include <stdio.h>
#include <string.h>

int main() {
    char answer[100]; // Declare a char array to store the name

    printf("What's your name? ");
    fgets(answer, sizeof(answer), stdin); // Read input from user
    
    // Remove newline character from the end of the input
    answer[strcspn(answer, "\n")] = '\0';
    
    printf("Hello, %s!\n", answer); // Print the user's name

    return 0;
}
