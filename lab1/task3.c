#include <stdio.h>

int main() {
float height;
    printf("Enter Height of the Person in centimeters: ");
    scanf("%f",&height);
    if(height<150)
        printf("The Person is DWARF");
    else if(height==150)
        printf("The Person is AVERAGE");
    else if(height>=165)
        printf("The Person is TALL");
    else
        printf("The Person is between DWARF and TALL but not AVERAGE");
    return 0;
}
