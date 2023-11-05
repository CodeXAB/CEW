#include <stdio.h>
int main(){
    char sentence[1000];
    int i = 0;
    printf("Enter a sentence: ");
    // Read characters until a newline is encountered
    char c;
    while ((c = getchar()) != '\n' && i < sizeof(sentence) - 1){
        // Check if the character is a letter
        if (c >= 'a' && c <= 'z'){
            // Convert lowercase to uppercase and vice versa
            sentence[i] = c - 'a' + 'A';
        }
        else if (c >= 'A' && c <= 'Z'){
            // Convert uppercase to lowercase
            sentence[i] = c - 'A' + 'a';
        }
        else{
            // If not a letter, store it as it is
            sentence[i] = c;
        }
        i++;
    }
    // Null-terminate the string
    sentence[i] = '\0';
    printf("Modified sentence: %s\n", sentence);
    return 0;
}
