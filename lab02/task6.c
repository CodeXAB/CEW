#include <stdio.h>
// Define the struct Distance
struct Distance {
    int ft;
    int inch;
};
int main() {
    // Declare variables of type struct Distance
    struct Distance d1, d2;
    // Read input for the first distance
    printf("Enter the ft and inch of the first distance: ");
    scanf("%d %d", &d1.ft, &d1.inch);
    // Read input for the second distance
    printf("Enter the ft and inch of the second distance: ");
    scanf("%d %d", &d2.ft, &d2.inch);
    // Calculate total distance in inches
    int totalInches = d1.ft * 12 + d1.inch + d2.ft * 12 + d2.inch;
    // Calculate total feet and remaining inches
    int totalFeet = totalInches / 12;
    int remainingInches = totalInches % 12;
    // Print the total distance
    printf("The total distance is: %d'%d\"\n", totalFeet, remainingInches);
    return 0;
}

