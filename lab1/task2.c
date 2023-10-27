#include <stdio.h>
int main() {
    float height, width;
    printf("Enter Height of the Rectangle: ");
    scanf("%f",&height);
    printf("Enter Width of the Rectangle: ");
    scanf("%f",&width);
    printf("The Perimeter of the Rectangle: %.2f units",height*2+width*2);
    printf("\nThe Area of the Rectangle: %.2f square units",height*width);
    return 0;
}
